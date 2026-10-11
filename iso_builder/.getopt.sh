# Command line options of build.sh.
#
# This file was missing from the tree; it only has to provide the two lists
# build.sh hands to getopt(), derived here from its own case statement:
#   short: d:pa:vDsh
#   long : distribution:,proposed-updates,arch:,verbose,debug,salt,installer,live,variant:,version:,subdir:,get-image-path,clean,no-clean
BUILD_OPTS_SHORT="d:pa:vDsh"
BUILD_OPTS_LONG="distribution:,proposed-updates,arch:,verbose,debug,salt,installer,live,variant:,version:,subdir:,get-image-path,clean,no-clean"
