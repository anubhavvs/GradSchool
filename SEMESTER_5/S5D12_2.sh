# Print the following pattern:
# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5

echo "Enter number of rows:"
read rows
num=1
for((i=1; i<=rows; i++))
do
    for((j=1; j<=i; j++))
    do
        echo -n "$num "
        num=$((num+1))
    done
    num=1
    echo
done
