class Employee {
    String name = "Suhas HM";
    String address = "Bangalore";
    double salary = 300000;
    String jobTitle = "CTO";

    void bonus() {
        System.out.println("Bonus: " + (0.02 * salary));
    }

    void salary() {
        double hra = 0.12 * salary;
        double da = 0.07 * salary;
        double totalSalary = salary + hra + da;
        System.out.println("Salary: " + totalSalary);
    }

    void perfReport() {
        System.out.println("Performance: Satisfied");
    }
    public static void main(String[] args) {
        Teacher teacher = new Teacher("Sanjan Kumar", "123 Street");
        teacher.salary();
        teacher.bonus();
        teacher.perfReport();

        Lecturer lecturer = new Lecturer("Joselyn", "456 Street");
        lecturer.salary();
        lecturer.bonus();
        lecturer.perfReport();

        Professor professor = new Professor("Richard Roe", "789 Street");
        professor.salary();
        professor.bonus();
        professor.perfReport();
    }
}

class Teacher extends Employee {
    Teacher(String name, String address) {
        super();
        this.name = name;
        this.address = address;
        this.jobTitle = "Teacher";
        this.salary = 30000;
    }
}

class Lecturer extends Employee {
    Lecturer(String name, String address) {
        super();
        this.name = name;
        this.address = address;
        this.jobTitle = "Lecturer";
        this.salary = 40000;
    }
}

class Professor extends Employee {
    Professor(String name, String address) {
        super();
        this.name = name;
        this.address = address;
        this.jobTitle = "Professor";
        this.salary = 50000;
    }
}
