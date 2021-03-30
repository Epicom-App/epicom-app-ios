#!/bin/sh
SCRIPTPATH=$(dirname "$BASH_SOURCE")
cd "${SCRIPTPATH}/../../common/"
./gradlew :common_code:cleanBuildCache
./gradlew :common_code:packForXCode
./gradlew -PCONFIGURATION="RELEASE" -PSDK_NAME="iphoneos" :common_code:packForXCode
cd "../ios/scripts"
sh CopyCommonFramework.sh
