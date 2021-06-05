import java.io.*;
class Program10
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a character:");
        char ch = br.readLine().charAt(0);
        if(ch>=65 && ch<=90)
            System.out.println("Capital");
        else if(ch>=97 && ch<=122)
            System.out.println("Small");
        else if(ch>=48 && ch<=57)
            System.out.println("Digit");
        else
            System.out.println("Special character");
    }
}