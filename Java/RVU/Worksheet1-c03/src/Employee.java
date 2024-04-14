public class Employee {
    String name, jobTitle;
    double basic, hra, da, incentive;

    Employee() {
        this.name = "Akshay";
        System.out.println(this.name + " got loss of pay");
    }

    Employee(String jobTitle, double basic, double hra, double da, double incentive) {
        this.jobTitle = jobTitle;
        this.basic = basic;
        this.hra = hra;
        this.da = da;
        this.incentive = incentive;
    }

    Employee(String jobTitle, double basic, double hra, double da) {
        this(jobTitle, basic, hra, da, 0);
    }

    void salary(String name, String x) {
        double sal = basic + basic * hra + basic * da + incentive;
        System.out.println(name + " " + x + ", Salary: " + sal);
    }

    void salary(String name) {
        double sal = basic + basic * hra + basic * da;
        System.out.println(name + ", Salary: " + sal);
    }

    public static void main(String args[]) {
        Employee ob1 = new Employee("engineer", 50000, 0.12, 0.05, 1500);
        Employee ob2 = new Employee("doctor", 50000, 0.12, 0.05);
        Employee ob3 = new Employee();
        ob1.salary("Aditya", "got incentive");
        ob2.salary("Arun");
    }
}
