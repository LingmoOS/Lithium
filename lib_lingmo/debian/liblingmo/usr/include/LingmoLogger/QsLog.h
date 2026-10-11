// Copyright (c) 2013, Razvan Petru
// All rights reserved.

// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:

// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright notice, this
//   list of conditions and the following disclaimer in the documentation and/or other
//   materials provided with the distribution.
// * The name of the contributors may not be used to endorse or promote products
//   derived from this software without specific prior written permission.

// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
// OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef QSLOG_H
#define QSLOG_H

#include "QsLogDest.h"
#include "QsLogLevel.h"
#include "QsLogMessage.h"
#include "QsLogSharedLibrary.h"
#include "QsLogVersion.h"

#include <QDebug>
#include <QObject>
#include <QQmlEngine>
#include <QString>
#include <memory>
#include <qobject.h>
#include <qtpreprocessorsupport.h>

namespace QsLogging {

class LoggerImpl; // d pointer
using DestinationPtrU = std::unique_ptr<Destination>;
class QSLOG_SHARED_OBJECT Logger : public QObject {
    Q_OBJECT
    QML_SINGLETON
    QML_NAMED_ELEMENT(Logger)

public:
    static Logger* instancePtr();
    static Logger& instance();
    static Level levelFromLogMessage(const QString& logMessage, bool* conversionSucceeded = 0);

    static Logger* create(QQmlEngine* x, QJSEngine* y)
    {
        Q_UNUSED(x);
        Q_UNUSED(y);
        return instancePtr();
    };

public:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    ~Logger() noexcept;

#if defined(Q_OS_WIN)
    //! When QS_LOG_SEPARATE_THREAD is defined on Windows, and you are using this library as a DLL,
    //! this function must be called before your program ends, to ensure a clean shutdown of the logger thread.
    //! Failing to call it will result in an assert being triggered, an error message being printed
    //! out and most probably a deadlock.
    //! Returns the wait result for the thread. When called on a non-threaded logger returns true
    //! immediately.
    bool shutDownLoggerThread();
#endif

    //! Adds a log message destination. Don't add null destinations.
    void addDestination(DestinationPtrU destination);

    //! For QML compatibility, the ownership of the destination is transferred to the logger
    // after this call.
    void addDestination(Destination* destination);

    //! Removes and returns a previously added destination. Returns null if not found.
    DestinationPtrU removeDestination(const QString& type);

    //! Checks if a destination of a specific type has been added. Pass T::Type as parameter.
    bool hasDestinationOfType(const char* type) const;

    //! Messages at a level < 'newLevel' will be ignored
    Q_INVOKABLE void setLoggingLevel(Level newLevel);

    //! The default level is INFO
    Q_INVOKABLE Level loggingLevel() const;

    //! The helper forwards the streaming to QDebug and builds the final
    //! log message.
    class QSLOG_SHARED_OBJECT Helper {
    public:
        explicit Helper(Level logLevel)
            : level(logLevel)
            , qtDebug(&buffer)
        {
        }
        ~Helper() noexcept;
        QDebug& stream() { return qtDebug; }

    private:
        Level level;
        QString buffer;
        QDebug qtDebug;
    };

    //! Easy functions for QML! Only support strings for now.
    Q_INVOKABLE void log_trace(const QString& message);
    Q_INVOKABLE void log_debug(const QString& message);
    Q_INVOKABLE void log_info(const QString& message);
    Q_INVOKABLE void log_warn(const QString& message);
    Q_INVOKABLE void log_error(const QString& message);
    Q_INVOKABLE void log_fatal(const QString& message);

    //! Helpers function for registering Destinations in QML.
    Q_INVOKABLE void registerFileDestination(const QString& sLogPath, int enableLogRotation = 1, int sizeInBytesToRotateAfter = 512, int oldLogsToKeep = 2);

    Q_INVOKABLE void registerDebugDestination();

private:
    Logger(QObject* parent = nullptr);

    void enqueueWrite(const LogMessage& message);
    void write(const LogMessage& message);

    std::unique_ptr<LoggerImpl> d;

    friend class LoggerThread;
};

} // end namespace

//! Logging macros: define QS_LOG_LINE_NUMBERS to get the file and line number
//! in the log output.
#ifndef QS_LOG_LINE_NUMBERS
#define QLOG_TRACE()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::TraceLevel) { \
    } else                                                                      \
        QsLogging::Logger::Helper(QsLogging::TraceLevel).stream()
#define QLOG_DEBUG()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::DebugLevel) { \
    } else                                                                      \
        QsLogging::Logger::Helper(QsLogging::DebugLevel).stream()
#define QLOG_INFO()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::InfoLevel) { \
    } else                                                                     \
        QsLogging::Logger::Helper(QsLogging::InfoLevel).stream()
#define QLOG_WARN()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::WarnLevel) { \
    } else                                                                     \
        QsLogging::Logger::Helper(QsLogging::WarnLevel).stream()
#define QLOG_ERROR()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::ErrorLevel) { \
    } else                                                                      \
        QsLogging::Logger::Helper(QsLogging::ErrorLevel).stream()
#define QLOG_FATAL()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::FatalLevel) { \
    } else                                                                      \
        QsLogging::Logger::Helper(QsLogging::FatalLevel).stream()
#else
#define QLOG_TRACE()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::TraceLevel) { \
    } else                                                                      \
        QsLogging::Logger::Helper(QsLogging::TraceLevel).stream() << __FILE__ << '@' << __LINE__
#define QLOG_DEBUG()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::DebugLevel) { \
    } else                                                                      \
        QsLogging::Logger::Helper(QsLogging::DebugLevel).stream() << __FILE__ << '@' << __LINE__
#define QLOG_INFO()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::InfoLevel) { \
    } else                                                                     \
        QsLogging::Logger::Helper(QsLogging::InfoLevel).stream() << __FILE__ << '@' << __LINE__
#define QLOG_WARN()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::WarnLevel) { \
    } else                                                                     \
        QsLogging::Logger::Helper(QsLogging::WarnLevel).stream() << __FILE__ << '@' << __LINE__
#define QLOG_ERROR()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::ErrorLevel) { \
    } else                                                                      \
        QsLogging::Logger::Helper(QsLogging::ErrorLevel).stream() << __FILE__ << '@' << __LINE__
#define QLOG_FATAL()                                                            \
    if (QsLogging::Logger::instance().loggingLevel() > QsLogging::FatalLevel) { \
    } else                                                                      \
        QsLogging::Logger::Helper(QsLogging::FatalLevel).stream() << __FILE__ << '@' << __LINE__
#endif

#ifdef QS_LOG_DISABLE
#include "QsLogDisableForThisFile.h"
#endif

#endif // QSLOG_H
