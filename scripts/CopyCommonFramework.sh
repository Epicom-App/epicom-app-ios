echoerr() { (>&2 echo "$@"); }
cmd=`echo ${0##*/}`

SCRIPTPATH=$(dirname "$BASH_SOURCE")

FRAMEWORK_FILENAME="CommonCode.framework"
FRAMEWORK_PATH="${SCRIPTPATH}/../Ebolapp/Resources/Frameworks/Common"
FRAMEWORK_SRC="${FRAMEWORK_PATH}/${FRAMEWORK_FILENAME}"
FRAMEWORK_DEBUG_PATH="${FRAMEWORK_PATH}/DEBUG/${FRAMEWORK_FILENAME}"
FRAMEWORK_RELEASE_PATH="${FRAMEWORK_PATH}/RELEASE/${FRAMEWORK_FILENAME}"

# Remove old
if [ -d $FRAMEWORK_SRC ]; then
    rm -R $FRAMEWORK_SRC
fi

# Copy appropriate framework
if [ "${PLATFORM_NAME}" = "iphonesimulator" ]; then
    cp -R $FRAMEWORK_DEBUG_PATH $FRAMEWORK_SRC
else
    cp -R $FRAMEWORK_RELEASE_PATH $FRAMEWORK_SRC
fi
