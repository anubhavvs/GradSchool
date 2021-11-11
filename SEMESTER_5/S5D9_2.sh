# implement fibonacci series
echo "Enter the number of terms"
read n
a=0
b=1
echo "The Fibonacci series is:"
echo -n "$a "
echo -n "$b "
for ((i=2;i<=n;i++))
do
    c=$((a+b))
    echo -n "$c "
    a=$b
    b=$c
done