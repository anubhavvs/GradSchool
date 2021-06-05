class Program3
{
    public static void main(String[] args) throws NegativeSizeException
    {
        int[] arr = {0,1,2,3,4,-5,6,7,-8,-9,10};
        try
        {
            for(int i=0;i<arr.length;i++)
            {
                if(arr[i]>=0)
                    System.out.println(arr[i]);
                else
                    throw new NegativeSizeException(arr[i]);
            }
        }
        catch(NegativeSizeException e)
        {
            System.out.println("Negative Value Found.");
            e.printStackTrace();
        }
    }
}
class NegativeSizeException extends Exception
{
    int x;
    NegativeSizeException(int x)
    {
        this.x = x;
    }
    int getX()
    {
        return x;
    }
}