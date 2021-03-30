#!/bin/bash

swiftlint="./Pods/SwiftLint/swiftlint"

if [ -f $swiftlint ];
then
    $swiftlint
fi
