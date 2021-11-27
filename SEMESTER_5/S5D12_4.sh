# sort given 5 numbers in ascending order

echo "Enter 5 numbers"
read a b c d e
arr=($a $b $c $d $e)
for((i=0; i<5; i++))
do
    for((j=0; j<5-i-1; j++))
    do
        if [ ${arr[j]} -gt ${arr[$((j+1))]} ]
        then
            temp=${arr[j]}
            arr[$j]=${arr[$((j+1))]}
            arr[$((j+1))]=$temp
        fi
    done
done
echo "Sorted numbers are:"
echo ${arr[*]}