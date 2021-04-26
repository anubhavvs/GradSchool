class PrimeNumbers {
    public static void main(String[] args) {
        int x = Integer.parseInt(args[0]);
        int ct=0,n=0,i=1,j=1;
        while(n<x)
        {
            j=1;
            ct=0;
            while(j<=i)
            {
                if(i%j==0)
                    ct++;
                j++;
            }
            if(ct==2)
            {
                System.out.printf("%d ",i);
                n++;
            }
            i++;
        }
    }
}