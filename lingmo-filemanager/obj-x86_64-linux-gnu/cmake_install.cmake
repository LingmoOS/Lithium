# Install script for directory: /home/lingmo/Lithium/lingmo-filemanager

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-filemanager" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-filemanager")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-filemanager"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/lingmo-filemanager")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-filemanager" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-filemanager")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-filemanager"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/qt6/qml/LingmoUI:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/x86_64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lingmo-filemanager")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/applications/lingmo-filemanager.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/applications" TYPE FILE FILES "/home/lingmo/Lithium/lingmo-filemanager/lingmo-filemanager.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/lingmo-filemanager/translations/ar_AA.qm;/usr/share/lingmo-filemanager/translations/az.qm;/usr/share/lingmo-filemanager/translations/be_BY.qm;/usr/share/lingmo-filemanager/translations/be_Latn.qm;/usr/share/lingmo-filemanager/translations/bg_BG.qm;/usr/share/lingmo-filemanager/translations/bs_BA.qm;/usr/share/lingmo-filemanager/translations/cs_CZ.qm;/usr/share/lingmo-filemanager/translations/da_DK.qm;/usr/share/lingmo-filemanager/translations/de_DE.qm;/usr/share/lingmo-filemanager/translations/en_US.qm;/usr/share/lingmo-filemanager/translations/eo_XX.qm;/usr/share/lingmo-filemanager/translations/es_ES.qm;/usr/share/lingmo-filemanager/translations/es_MX.qm;/usr/share/lingmo-filemanager/translations/fa_IR.qm;/usr/share/lingmo-filemanager/translations/fi_FI.qm;/usr/share/lingmo-filemanager/translations/fr_FR.qm;/usr/share/lingmo-filemanager/translations/he_IL.qm;/usr/share/lingmo-filemanager/translations/hi_IN.qm;/usr/share/lingmo-filemanager/translations/hu_HU.qm;/usr/share/lingmo-filemanager/translations/id_ID.qm;/usr/share/lingmo-filemanager/translations/ie.qm;/usr/share/lingmo-filemanager/translations/it_IT.qm;/usr/share/lingmo-filemanager/translations/ja_JP.qm;/usr/share/lingmo-filemanager/translations/lt_LT.qm;/usr/share/lingmo-filemanager/translations/lv_LV.qm;/usr/share/lingmo-filemanager/translations/mg.qm;/usr/share/lingmo-filemanager/translations/ml_IN.qm;/usr/share/lingmo-filemanager/translations/nb_NO.qm;/usr/share/lingmo-filemanager/translations/ne_NP.qm;/usr/share/lingmo-filemanager/translations/pl_PL.qm;/usr/share/lingmo-filemanager/translations/pt_BR.qm;/usr/share/lingmo-filemanager/translations/pt_PT.qm;/usr/share/lingmo-filemanager/translations/ro_RO.qm;/usr/share/lingmo-filemanager/translations/ru_RU.qm;/usr/share/lingmo-filemanager/translations/si_LK.qm;/usr/share/lingmo-filemanager/translations/sk_SK.qm;/usr/share/lingmo-filemanager/translations/so.qm;/usr/share/lingmo-filemanager/translations/sr_RS.qm;/usr/share/lingmo-filemanager/translations/sv_SE.qm;/usr/share/lingmo-filemanager/translations/sw.qm;/usr/share/lingmo-filemanager/translations/ta_IN.qm;/usr/share/lingmo-filemanager/translations/tr_TR.qm;/usr/share/lingmo-filemanager/translations/uk_UA.qm;/usr/share/lingmo-filemanager/translations/uz_UZ.qm;/usr/share/lingmo-filemanager/translations/vi.qm;/usr/share/lingmo-filemanager/translations/zh_CN.qm;/usr/share/lingmo-filemanager/translations/zh_Hant_HK.qm;/usr/share/lingmo-filemanager/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/lingmo-filemanager/translations" TYPE FILE FILES
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/ar_AA.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/az.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/be_BY.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/be_Latn.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/bg_BG.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/bs_BA.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/cs_CZ.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/da_DK.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/de_DE.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/en_US.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/eo_XX.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/es_ES.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/es_MX.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/fa_IR.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/fi_FI.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/fr_FR.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/he_IL.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/hi_IN.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/hu_HU.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/id_ID.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/ie.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/it_IT.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/ja_JP.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/lt_LT.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/lv_LV.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/mg.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/ml_IN.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/nb_NO.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/ne_NP.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/pl_PL.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/pt_BR.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/pt_PT.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/ro_RO.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/ru_RU.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/si_LK.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/sk_SK.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/so.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/sr_RS.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/sv_SE.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/sw.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/ta_IN.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/tr_TR.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/uk_UA.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/uz_UZ.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/vi.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/zh_CN.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/zh_Hant_HK.qm"
    "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/zh_TW.qm"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/install_local_manifest.txt"
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
  file(WRITE "/home/lingmo/Lithium/lingmo-filemanager/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
