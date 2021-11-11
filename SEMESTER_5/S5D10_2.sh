# print reverse of a number
echo "Enter a number"
read num
rev=0
while [ $num -gt 0 ]
do
    rem=$(( $num % 10 ))
    rev=$(( $rev * 10 + $rem ))
    num=$(( $num / 10 ))
done
echo "Reverse is $rev"