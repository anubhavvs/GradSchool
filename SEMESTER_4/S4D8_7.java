class Maximum
{
    public static void main(String[] args)
    {
        int max=Integer.parseInt(args[0]);
        int min=Integer.parseInt(args[0]);

        for(int i =0; i<args.length; i++)
        {
            int n = Integer.parseInt(args[i]);
            {
                if(n >= max)
                {
                    max = n;
                }
            }
        }
        for(int i =0; i<args.length; i++)
        {
            int n = Integer.parseInt(args[i]);
            {
                if(n < min)
                {
                    min = n;
                }
            }
        }
        System.out.println("the maximum number is "+ max);
        System.out.println("the minimum number is "+ min);
    }
}