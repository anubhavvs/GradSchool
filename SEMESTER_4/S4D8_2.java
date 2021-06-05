abstract class Employees
{
    String name;
    Employees(String n)
    {
        name = n;
    }
    abstract double calSal();
    void display()
    {
        System.out.println("\nName : "+name);
    }
}
class Manager extends Employees
{
    int basic;
    Manager(String n, int b)
    {
        super(n);
        basic = b;
    }
    double calSal()
    {
        return basic - (0.2*basic);
    }
    void display()
    {
        super.display();
        System.out.println("Salary : "+calSal());
    }
}
class Clerk extends Employees
{
    int basic;
    Clerk(String n, int b)
    {
        super(n);
        basic = b;
    }
    double calSal()
    {
        return basic - (0.1*basic);
    }
    void display()
    {
        super.display();
        System.out.println("Salary : "+calSal());
    }
}

class Program2 {
    public static void main(String[] args) {
        Manager obj1 = new Manager("Mr. Rahul", 80000);
        Clerk obj2 = new Clerk("Mr. Suresh", 20000);
        obj1.display();
        obj2.display();
    }
}