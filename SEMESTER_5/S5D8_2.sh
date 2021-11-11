# bash script for 1+2+3+4...+n series
echo "Enter the number"
read n
i=1
sum=0
while [ $i -le $n ]
do
    sum=`expr $sum + $i`
    i=`expr $i + 1`
done
echo "The sum of 1+2+3+4...+$n is $sum"