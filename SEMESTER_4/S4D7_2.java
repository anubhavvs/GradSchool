import java.util.Scanner;
class CreditCard {
    public static void main(String[] args) {
        double charges, amount;
        System.out.print("Enter Charges: ");
        Scanner sc = new Scanner(System.in);
        charges = sc.nextDouble();

        if(charges<=500)
            amount=(charges/100)*0.25;
        else {
            amount=(500/100)*0.25;
            charges=charges-500;
            if(charges<=1000)
                amount = amount+(charges/100)*0.5;
            else {
                amount = amount+(1000/100)*0.5;
                charges=charges-1000;
                if(charges<=1000)
                    amount = amount+(charges/100)*0.75;
                else {
                    amount = amount+(1000/100)*0.75;
                    charges=charges-1000;
                    if(charges>=1)
                        amount=amount+(charges/100);
                }
            }
        }

        System.out.println("Payback Amount: "+amount);
    }
}