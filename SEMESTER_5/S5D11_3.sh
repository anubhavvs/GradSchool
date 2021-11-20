# calculator in script
while [ 1 ]
do
    echo '1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit'
    read op
    case '$op' in
        "1") op="+"
        ;;
        "2") op="-"
        ;;
        "3") op="*"
        ;;
        "4") op="/"
        ;;
        "5") exit 0
        ;;
        *) echo 'Invalid Choice'; continue
    esac
    echo 'Enter two numbers:'
    read n1 n2
    echo 'Result:'
    echo $n1$op$n2 | bc -l
done