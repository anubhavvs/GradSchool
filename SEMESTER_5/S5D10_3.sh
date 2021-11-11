# find out gcd of two numbers
echo "Enter two numbers"
read a b
while [ $b -ne 0 ]
do
    r=`expr $a % $b`
    a=$b
    b=$r
done
echo "GCD of is $a"