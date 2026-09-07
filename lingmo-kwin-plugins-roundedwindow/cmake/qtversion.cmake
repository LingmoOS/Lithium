find_package(KF6 QUIET COMPONENTS ConfigWidgets)

if(${KF6_FOUND} EQUAL 0)
    message(FATAL_ERROR "KF6 not found, please install it")
endif ()
