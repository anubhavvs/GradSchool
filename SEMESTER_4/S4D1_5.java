class FactorialMain {
    public static void main(String[] args) {
        int num = Integer.parseInt(args[0]);
        System.out.println("Factorial of "+num+" is "+Factorial.factorial(num)+".");
    }
}

class Factorial {
    static int factorial(int num) {
        if (num == 0) {
            return 1;
        }
        return num*factorial(num-1);
    }
}