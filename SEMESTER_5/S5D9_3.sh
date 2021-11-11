# check if a number is prime or not
echo "Enter a number"
read num
flag=0
for((i=2;i<=num/2;i++))
do
    if [ `expr $num % $i` -eq 0 ]
    then
        flag=1
        break
    fi
done
if [ $flag -eq 1 ]
then
    echo "$num is not a prime number"
else
    echo "$num is a prime number"
fi