class Program6
{
    public static void main(String[] args)
    {
        int count = 0;
        for(int i=1; i<=args.length; i++)
        {
            count++;
        }
        System.out.println("Number of words = "+count);
    }
}