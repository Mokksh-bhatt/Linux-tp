#!/bin/bash

mkdir -p backup_unique 2>> error.log

total=0
unique=0
duplicate=0
declare -A hashes

for file in submissions/*; do
    if [ -f "$file" ]; then
        ((total++))
        hash=$(md5sum "$file" 2>> error.log | awk '{print $1}')
        
        if [ -n "${hashes[$hash]}" ]; then
            ((duplicate++))
        else
            hashes[$hash]=1
            ((unique++))
            cp "$file" backup_unique/ 2>> error.log
        fi
    fi
done

echo "Total processed: $total" > report.txt
echo "Unique backed up: $unique" >> report.txt
echo "Duplicates found: $duplicate" >> report.txt
echo "Done! Check report.txt"
