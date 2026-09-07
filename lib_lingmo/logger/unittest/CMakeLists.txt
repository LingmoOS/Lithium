set(PROJECTNAME QsLogUnitTest)
project(${PROJECTNAME})

find_package(Qt6Test REQUIRED)

include_directories(${QsLogUnitTest_SOURCE_DIR} ${LingmoLogger_SOURCE_DIR})

if(QS_LOG_IS_SHARED_LIBRARY)
	# Ugh, ugly hack
	add_definitions(-UQSLOG_IS_SHARED_LIBRARY)
	add_definitions(-DQSLOG_IS_SHARED_LIBRARY_IMPORT)
endif()

set(HEADER_FILES
	TestLog.h
	QtTestUtil/QtTestUtil.h
	QtTestUtil/TestRegistration.h
	QtTestUtil/TestRegistry.h
	)

set(SOURCE_FILES
	TestLog.cpp
	QtTestUtil/SimpleChecker.cpp
	QtTestUtil/TestRegistry.cpp
	)

add_executable(${PROJECTNAME} ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(${PROJECTNAME} LingmoLogger Qt6::Test Qt6::Core Qt6::Qml) 
