class Bank {
	public static void main(String[] args) {
		int balance = 1000;
		String flag = args[0];
		switch(flag) {
			case "-d":
				int depositAmount = Integer.parseInt(args[1]);
				balance = deposit(balance, depositAmount);
				checkBalance(balance);
				break;
			case "-w":
				int withdrawAmount = Integer.parseInt(args[1]);
				balance = withdraw(balance, withdrawAmount);
				checkBalance(balance);
				break;
			case "-c":
				checkBalance(balance);
				break;
			default:
				System.out.println("Invalid Choice");
				
		}
	}
	static void checkBalance(int balance) {
		System.out.println("Available Balance is "+balance+".");
	}
	static int deposit(int balance, int depositAmount) {
		System.out.println(depositAmount+" deposited successfully.");
		return balance+depositAmount;
	}
	static int withdraw(int balance, int withdrawAmount) {
		if(balance >= withdrawAmount) {
			System.out.println(withdrawAmount+" withdrawn successfully.");
			return balance-withdrawAmount;
		}
		else {
			System.out.println("Not enough balance.");
			return 0;
		}
	}
}