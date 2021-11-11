# find out whether a year is a leap year or not
echo "Enter a year: "
read year
x=$(( $year % 4 ))
y=$(( $year % 100 ))
z=$(( $year % 400 ))
if [ $x -eq 0 ] || [ $y -eq 0 ] || [ $z -eq 0 ]
then
    echo "$year is a leap year"
else
    echo "$year is not a leap year"
fi