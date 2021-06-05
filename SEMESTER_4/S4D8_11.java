import java.io.*;
class Prog11
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter size of the array: ");
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        System.out.println("Enter the values:");
        for(int i=0;i<n;i++)
        {
            arr[i] = Integer.parseInt(br.readLine());
        }
        System.out.print("Enter the number to be searched: ");
        int x = Integer.parseInt(br.readLine());
        for(int i=0;i<n;i++)
        {
            if(arr[i] == x)
            {
                System.out.println("Found at position "+(i+1));
                return ;
            }
        }
        System.out.println("Not found");
    }
}