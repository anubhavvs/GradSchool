class Calculator {
    public static void main(String[] args) {
        int x = Integer.parseInt(args[0]);
        int y = Integer.parseInt(args[1]);
        System.out.println("Addition: "+sum(x, y));
        System.out.println("Subtraction: "+difference(x, y));
        System.out.println("Multiplication: "+product(x, y));
        System.out.println("Division: "+ division(x, y));
    }
    static int sum(int x, int y) {
        return x+y;
    }
    static int difference(int x, int y) {
        return x-y;
    }
    static int product(int x, int y) {
        return x*y;
    }
    static double division(int x, int y) {
        return (double) x / (double) y;
    }
}