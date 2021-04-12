#!/bin/bash

# insert the correct file id
fileId=$GDRIVE_FILE_ID
folder="./scripts/resourceGen"
generator_jar="$folder/StringGenerator-1.1.10.jar"
placeholder_txt="$folder/placeholder.txt"
output_path="Ebolapp/Resources"

if [ "$fileId" != "" ]
then

    sheet="sheet.xlsx"
    curl -L --max-redirs 3 -f -o "$sheet" "https://docs.google.com/spreadsheets/d/$fileId/export?format=xlsx&id=$fileId"

    # Localizable strings
    java -jar $generator_jar \
        -namedplaceholder $placeholder_txt \
        -out $output_path \
        -os ios \
        -input "$sheet" \
        -table "Localizations" \
        -keys B \
        -lang 3 \
        -from C \
        -to D
    
    # Permission strings
    java -jar $generator_jar \
        -namedplaceholder $placeholder_txt \
        -out $output_path \
        -os ios \
        -input "$sheet" \
        -table "Permissions" \
        -keys C \
        -lang 3 \
        -from D \
        -to E \
        -fileName InfoPlist.strings

    # Tracking
    java -jar $generator_jar \
        -namedplaceholder $placeholder_txt \
        -out $output_path \
        -os ios \
        -input "$sheet" \
        -table "Tracking" \
        -keys B \
        -lang 3 \
        -from C \
        -to C \
        -fileName Tracking.strings

    # NonLocalizations
    java -jar $generator_jar \
        -namedplaceholder $placeholder_txt \
        -out $output_path \
        -os ios \
        -input "$sheet" \
        -table "NonLocalizations" \
        -keys B \
        -lang 3 \
        -from C \
        -to C \
        -fileName NonLocalizable.strings
    
    # Colors
    java -jar $generator_jar \
        -out $output_path \
        -os android \
        -input "$sheet" \
        -table "Colors" \
        -keys B \
        -lang 2 \
        -from F \
        -to F \
        -fileName colors.xml \
        -resourceType "color"
    
    # copy colors.xml to correct directory
    cp $output_path/values/colors.xml $output_path/colors.xml
    rm -r $output_path/values

    # remove the temporary sheet file
    rm -r "$sheet"

fi
