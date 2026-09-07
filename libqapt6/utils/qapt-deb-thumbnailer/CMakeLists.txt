add_library(debthumbnailer MODULE DebThumbnailer.cpp)

target_link_libraries(debthumbnailer
    KF6::KIOWidgets
    QApt::Main)

message(WARNING "make sure thumbnailer actually works")

install(TARGETS debthumbnailer DESTINATION ${KDE_INSTALL_FULL_QTPLUGINDIR})
# install(FILES debthumbnailer.desktop DESTINATION ${SERVICES_INSTALL_DIR})
