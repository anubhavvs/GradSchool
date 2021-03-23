class calculates {
    public static void main(String[] args) {
        int x = Integer.parseInt(args[0]);
        System.out.println(x);
		double tax = 0;

        if(x <= 50000)
        {
			tax = 0;
            System.out.println("Income Tax: "+tax);
        }
        else if(x>50000 && x <= 60000)
        {
            tax = (x-50000)*0.1;
            System.out.println("Income Tax: "+tax);
        }
        else if(x>60000 && x<=150000)
        {
            tax = (x-50000)*0.2;
            System.out.println("Income Tax: "+tax);
        }
        else
        {
            tax = (x-50000)*0.3;
            System.out.println("Income Tax: "+tax);
        }
    }
}