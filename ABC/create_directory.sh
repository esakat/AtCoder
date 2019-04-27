#!/bin/bash

######
# How to use
# $ ./create_direcory.sh abcxxx
#####

directory_name=$(echo $1)
echo "will be created ${directory_name}"

cp -r template ${directory_name}
sed -i -e "s/template/${directory_name}/g" ./${directory_name}/CMakeLists.txt


