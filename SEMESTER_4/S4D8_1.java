class Person {
    private String name;
    Person(String n)
    {
        name = n;
    }
    void display()
    {
        System.out.println("Name : "+name);
    }
}

class Politician extends Person {
    int sal;
    Politician(String n,int s)
    {
        super(n); sal = s;
    }
    double calculateSalary()
    {
        return sal - (0.1*sal);
    }
    void display()
    {
        super.display();
        System.out.println("Salary : "+calculateSalary());
    }
}

class Sportsman extends Person {
    String team;
    Sportsman(String n,String t)
    {
        super(n);
        team = t;
    }
    void display()
    {
        super.display();
        System.out.println("Team : "+team);
    }
}

class Program1 {
    public static void main(String[] args) {
        Politician obj1 = new Politician("Mr. Kumar", 100000);
        Sportsman obj2 = new Sportsman("Mr. Ray", "IND");
        obj1.display();
        obj2.display();
    }
}