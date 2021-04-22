class Prime {
    public static void main(String[] args) {
        int n1 = Integer.parseInt(args[0]);
        int n2 = Integer.parseInt(args[1]);
        int flag, i, j;
        System.out.println("Prime numbers between " + n1 +" and "+ n2 +" are:");
        for(i=n1; i<=n2; i++) {
            if(i==1 || i==0)
                continue;
            flag = 1;
            for(j=2; j<=i/2; ++j) {
                if(i%j == 0) {
                    flag = 0;
                    break;
                }
            }
            if(flag ==1 ) {
                System.out.println(i);
            }
        }
    }
}