# print the pattern:
# 1
# 2 2
# 3 3 3
# 4 4 4 4
# 5 5 5 5 5

echo "Enter number of rows:"
read rows
num=1
for((i=1; i<=rows; i++))
do
    for((j=1; j<=i; j++))
    do
        echo -n "$num "
    done
    num=$j
    echo
done