class Employee {
    int salary, tax;
    char grade;
    Employee(int s, int t, char g) {
        salary = s;
        tax = t;
        grade = g;
    }
    int netSalary() {
        return salary - tax;
    }
    char getGrade() {
        return grade;
    }
    public static void main(String[] args) {
        Employee obj = new Employee(10000, 500, 'A');
        System.out.println("Net Salary: "+ obj.netSalary());
        System.out.println("Grade: "+ obj.getGrade());
    }
}