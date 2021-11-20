# find pattern from file
echo 'Enter the filename and pattern:'
read filename pattern
grep -i $pattern $filename