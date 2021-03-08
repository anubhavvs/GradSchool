class FibonacciMain {
    public static void main(String[] args) {
        int count = Integer.parseInt(args[0]);
        System.out.print(Fibonacci.n1+" "+Fibonacci.n3);
        Fibonacci.fibonacci(count-1);
    }
}

class Fibonacci {
    static int n1=0,n2=1,n3=0;
    static void fibonacci(int count){
        if(count>0){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            System.out.print(" "+n3);
            fibonacci(count-1);
        }
    }
}