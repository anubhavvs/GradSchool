import java.util.Scanner;
class ComputePI {
    public static void main(String[] args) {
        double sum = 0;
        long terms;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of terms: ");
        terms = sc.nextLong();
        for(double d = 1; d<=(2*terms - 1); d+=2) {
            sum+= (1/d);
            d+=2;
            sum -= 1/d;
        }
        double pi = 4*sum;
        System.out.println("Value of PI: "+pi);
    }
}