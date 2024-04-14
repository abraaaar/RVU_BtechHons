import java.util.Scanner;
public class Employee {
    private String name;
    private String jobTitle;
    private double salary;

    public Employee(String name, String jobTitle) {
        this.name = name;
        this.jobTitle = jobTitle;
        this.salary = calculateSalary();
    }
    public Employee(String name, String jobTitle, double salary) {
        this.name = name;
        this.jobTitle = jobTitle;
        this.salary = salary;
    }
    private double calculateSalary() {
        double basic = 50000;
        double hra = basic * 0.12;
        double da = basic * 0.05;
        return basic + hra + da;
    }
    public String getName() {
        return name;
    }

    public String getJobTitle() {
        return jobTitle;
    }

    public double getSalary() {
        return salary;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter employee name: ");
        String name = scanner.nextLine();

        System.out.print("Enter employee job title: ");
        String jobTitle = scanner.nextLine();

        System.out.print("Enter employee salary: ");
        double salary = scanner.nextDouble();

        Employee employee = new Employee(name, jobTitle, salary);

        System.out.println("\nEmployee details:");
        System.out.println("---------------------");
        System.out.println("Name: " + employee.getName());
        System.out.println("Job Title: " + employee.getJobTitle());
        System.out.println("Salary: " + employee.getSalary());
        scanner.close();
    }
}