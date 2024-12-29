import java.util.HashMap;
import java.util.Scanner;

class Employee {
    private int id;
    private String name;
    private String department;
    private int salary;
    public Employee(int id, String name, String department, int salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }
    public int getId(){
        return id;
    }
    public void setId(int id) {
        if(id>0 || id<10){
            this.id = id;
        }
        else {
            System.out.println("Invalid ID");
        }
    }
    public String getName(){
        return name;
    }
    public void setName(String name){
        String[] names = name.split("[0123456789]");
        if(names.length == 1){
            this.name = name;
        }
        else{
            System.out.println("Invalid Name");
        }
    }
    public String getDepartment(){
        return department;
    }
    public void setDepartment(String department){
        String[] names = name.split("[0123456789]");
        if(names.length == 1){
            this.department = department;
        }
        else{
            System.out.println("Invalid Name");
        }
    }
    public int getSalary(){
        return salary;
    }
    public void setSalary(int salary){
        this.salary = salary;
    }

    public void display(){
        System.out.println("Employee ID: "+id);
        System.out.println("Employee Name: "+name);
        System.out.println("Employee Department: "+department);
        System.out.println("Employee Salary: "+salary);
    }

}
public class Week7c {
    public static void main(String[] args) {
        HashMap<Integer, Employee> employees = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of employees: ");
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            System.out.println("Enter details for employee " + (i + 1));
            System.out.print("Id: ");
            int id = sc.nextInt();
            System.out.print("Name: ");
            String name = sc.next();
            System.out.print("Department: ");
            String department = sc.next();
            System.out.print("Salary: ");
            int salary = sc.nextInt();
            Employee employee = new Employee(id, name, department, salary);
            employees.put(id, employee);
        }
        System.out.print("Enter the employee ID: ");
        int searchId = sc.nextInt();
        if(employees.containsKey(searchId)){
            System.out.println("Employee found");
            Employee found = employees.get(searchId);
            found.display();
        }
        else{
            System.out.println("Employee not found");
        }
        sc.close();
        }
    }
