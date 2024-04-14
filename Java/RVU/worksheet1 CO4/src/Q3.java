import java.util.Scanner;
public class Q3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter Hostel Name:");
        String hostelName = scanner.nextLine();

        System.out.println("Enter Hostel Location:");
        String hostelLocation = scanner.nextLine();

        System.out.println("Enter Number of Rooms:");
        int numberOfRooms = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        System.out.println("Enter Student Name:");
        String studentName = scanner.nextLine();

        System.out.println("Enter Registration Number:");
        String regdNo = scanner.nextLine();

        System.out.println("Enter Elective Subject:");
        String electiveSubject = scanner.nextLine();

        System.out.println("Enter Average Marks:");
        double avgMarks = scanner.nextDouble();
        scanner.nextLine(); // Consume newline

        System.out.println("Enter Department Name:");
        String deptName = scanner.nextLine();

        System.out.println("Enter Department Head:");
        String deptHead = scanner.nextLine();

        Student student = new Student(hostelName, hostelLocation, numberOfRooms,
                studentName, regdNo, electiveSubject, avgMarks, deptName, deptHead);

        student.printStudentDetails();
        student.printHostelDetails();
        student.printDeptDetails();

        scanner.close();
    }
}
// Department interface
interface Department {
    void printDeptDetails();

}
// Hostel class
class Hostel {
    String hostelName;
    String hostelLocation;

    int numberOfRooms;

    public Hostel(String hostelName, String hostelLocation, int numberOfRooms) {
        this.hostelName = hostelName;
        this.hostelLocation = hostelLocation;
        this.numberOfRooms = numberOfRooms;
    }
    void printHostelDetails() {
        System.out.println("Hostel Name: " + hostelName);
        System.out.println("Location: " + hostelLocation);
        System.out.println("Number of Rooms: " + numberOfRooms);
    }

}
// Student class implementing Department interface
class Student extends Hostel implements Department {
    String studentName;
    String regdNo;
    String electiveSubject;
    double avgMarks;
    String deptName;

    String deptHead;

    public Student(String hostelName, String hostelLocation, int numberOfRooms,
                   String studentName, String regdNo, String electiveSubject, double avgMarks,
                   String deptName, String deptHead) {
        super(hostelName, hostelLocation, numberOfRooms);
        this.studentName = studentName;
        this.regdNo = regdNo;
        this.electiveSubject = electiveSubject;
        this.avgMarks = avgMarks;
        this.deptName = deptName;
        this.deptHead = deptHead;
    }

    void printStudentDetails() {
        System.out.println("Student Name: " + studentName);
        System.out.println("Registration Number: " + regdNo);
        System.out.println("Elective Subject: " + electiveSubject);
        System.out.println("Average Marks: " + avgMarks);
    }
    @Override
    public void printDeptDetails() {
        System.out.println("Department Name: " + deptName);
        System.out.println("Department Head: " + deptHead);
    }

}

