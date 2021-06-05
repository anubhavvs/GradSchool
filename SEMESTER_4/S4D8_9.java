import java.util.Scanner;

class Student
{
    String Str1,Str2;
    Student(String S1, String S2)
    {
        Str1=S1;
        Str2=S2;
    }
    boolean isequal()
    {
        return Str1.equals(Str2);
    }
    public static void main(String[] args) {
        String S1,S2;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two strings:");
        S1=sc.nextLine();
        S2=sc.nextLine();
        Student ob=new Student(S1,S2);
        boolean k=ob.isequal();
        System.out.println("The result is: "+k);
    }
}