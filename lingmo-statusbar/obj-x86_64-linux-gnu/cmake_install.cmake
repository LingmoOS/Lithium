# Install script for directory: /home/lingmo/Lithium/lingmo-statusbar

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "None")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/x86_64-linux-gnu-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-statusbar" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-statusbar")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-statusbar"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/lingmo-statusbar")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-statusbar" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-statusbar")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-statusbar"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/qt6/qml/LingmoUI:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/x86_64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-statusbar")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lingmo-statusbar/translations/ar_AA.qm;/usr/share/lingmo-statusbar/translations/az_AZ.qm;/usr/share/lingmo-statusbar/translations/be_BY.qm;/usr/share/lingmo-statusbar/translations/be_Latn.qm;/usr/share/lingmo-statusbar/translations/bg_BG.qm;/usr/share/lingmo-statusbar/translations/bs_BA.qm;/usr/share/lingmo-statusbar/translations/cs_CZ.qm;/usr/share/lingmo-statusbar/translations/da_DK.qm;/usr/share/lingmo-statusbar/translations/de_DE.qm;/usr/share/lingmo-statusbar/translations/en_US.qm;/usr/share/lingmo-statusbar/translations/eo_XX.qm;/usr/share/lingmo-statusbar/translations/es_ES.qm;/usr/share/lingmo-statusbar/translations/es_MX.qm;/usr/share/lingmo-statusbar/translations/fa_IR.qm;/usr/share/lingmo-statusbar/translations/fi_FI.qm;/usr/share/lingmo-statusbar/translations/fr_FR.qm;/usr/share/lingmo-statusbar/translations/he_IL.qm;/usr/share/lingmo-statusbar/translations/hi_IN.qm;/usr/share/lingmo-statusbar/translations/hu_HU.qm;/usr/share/lingmo-statusbar/translations/id_ID.qm;/usr/share/lingmo-statusbar/translations/ie.qm;/usr/share/lingmo-statusbar/translations/it_IT.qm;/usr/share/lingmo-statusbar/translations/ja_JP.qm;/usr/share/lingmo-statusbar/translations/lt_LT.qm;/usr/share/lingmo-statusbar/translations/lv_LV.qm;/usr/share/lingmo-statusbar/translations/mg.qm;/usr/share/lingmo-statusbar/translations/ml_IN.qm;/usr/share/lingmo-statusbar/translations/nb_NO.qm;/usr/share/lingmo-statusbar/translations/ne_NP.qm;/usr/share/lingmo-statusbar/translations/pl_PL.qm;/usr/share/lingmo-statusbar/translations/pt_BR.qm;/usr/share/lingmo-statusbar/translations/pt_PT.qm;/usr/share/lingmo-statusbar/translations/ro_RO.qm;/usr/share/lingmo-statusbar/translations/ru_RU.qm;/usr/share/lingmo-statusbar/translations/si_LK.qm;/usr/share/lingmo-statusbar/translations/sk_SK.qm;/usr/share/lingmo-statusbar/translations/so.qm;/usr/share/lingmo-statusbar/translations/sr_RS.qm;/usr/share/lingmo-statusbar/translations/sv_SE.qm;/usr/share/lingmo-statusbar/translations/sw.qm;/usr/share/lingmo-statusbar/translations/ta_IN.qm;/usr/share/lingmo-statusbar/translations/tr_TR.qm;/usr/share/lingmo-statusbar/translations/uk_UA.qm;/usr/share/lingmo-statusbar/translations/uz_UZ.qm;/usr/share/lingmo-statusbar/translations/vi_VN.qm;/usr/share/lingmo-statusbar/translations/zh_CN.qm;/usr/share/lingmo-statusbar/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lingmo-statusbar/translations" TYPE FILE FILES
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/ar_AA.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/az_AZ.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/be_BY.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/be_Latn.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/bg_BG.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/bs_BA.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/cs_CZ.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/da_DK.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/de_DE.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/en_US.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/eo_XX.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/es_ES.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/es_MX.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/fa_IR.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/fi_FI.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/fr_FR.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/he_IL.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/hi_IN.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/hu_HU.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/id_ID.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/ie.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/it_IT.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/ja_JP.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/lt_LT.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/lv_LV.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/mg.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/ml_IN.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/nb_NO.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/ne_NP.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/pl_PL.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/pt_BR.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/pt_PT.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/ro_RO.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/ru_RU.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/si_LK.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/sk_SK.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/so.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/sr_RS.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/sv_SE.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/sw.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/ta_IN.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/tr_TR.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/uk_UA.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/uz_UZ.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/vi_VN.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/zh_CN.qm"
    "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/zh_TW.qm"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/lingmo/Lithium/lingmo-statusbar/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
