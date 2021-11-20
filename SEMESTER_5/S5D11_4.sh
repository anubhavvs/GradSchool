# find average of 5 subjects
echo 'Enter 5 marks'
read n1 n2 n3 n4 n5
total=$((n1 + n2 + n3 + n4 + n5))
avg=$((total / 5))
if [ "$avg" -ge 60 ]; then
    echo 'Passed with distinction.'
elif [ "$avg" -ge 50 ] && [ "$avg" -lt 60 ]; then
    echo 'Passed with second class.'
elif [ "$avg" -ge 40 ] && [ "$avg" -lt 50 ]; then
    echo 'Passed with third class.'
elif [ "$avg" lt 40 ]; then
    echo 'Sorry, you have failed.'
fi