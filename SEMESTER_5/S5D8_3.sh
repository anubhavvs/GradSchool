# calculate sum of digits of a number
echo "Enter a number"
read num
sum=0
while [ $num -gt 0 ]
do
    rem=$(( $num % 10 ))
    sum=$(( $sum + $rem ))
    num=$(( $num / 10 ))
done
echo "Sum of digits is $sum"