# check if a number is odd or even
echo 'Enter a number:'
read n
if [ $((n%2)) -eq 0 ]
then
    echo 'Even'
else
    echo 'Odd'
fi