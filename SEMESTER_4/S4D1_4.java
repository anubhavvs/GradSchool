import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Main {
    public static void main(String[] args) throws IOException {
        int balance = 1000;
        while (true) {
            System.out.println("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit");
            System.out.print("Enter your choice: ");
            BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
            int choice = Integer.parseInt( reader.readLine());
            switch (choice) {
                case 1:
                    balance = Deposit.deposit(balance);
                    break;
                case 2:
                    balance = Withdraw.withdraw(balance);
                    break;
                case 3:
                    CheckBalance.checkBalance(balance);
                    break;
                case 4:
                    System.exit(1);
                default:
                    System.out.print("Invalid choice!");
            }
        }
    }
}

class Deposit {
    static int deposit(int balance) throws IOException {
        System.out.print("Enter amount: ");
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int amount = Integer.parseInt( reader.readLine());
        System.out.println(amount+ " added successfully!");
        return balance+amount;
    }
}

class Withdraw {
    static int withdraw(int balance) throws IOException {
        System.out.print("Enter amount: ");
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int amount = Integer.parseInt( reader.readLine());
        if(amount > balance) {
            System.out.println("Insufficient Balance.");
            return balance;
        } else {
            System.out.println(amount+" withdrawn successfully!");
            return balance-amount;
        }
    }
}

class CheckBalance {
    static void checkBalance(int balance) {
        System.out.println("Current balance: "+balance);
    }
}