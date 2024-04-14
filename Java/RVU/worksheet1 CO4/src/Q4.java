import java.util.Scanner;
public class Q4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter student name:");
        String name = scanner.nextLine();

        System.out.println("Enter student roll number:");
        int rollNo = scanner.nextInt();

        System.out.println("Enter internal marks 1:");
        int internalMarks1 = scanner.nextInt();

        System.out.println("Enter internal marks 2:");
        int internalMarks2 = scanner.nextInt();

        System.out.println("Enter external marks 1:");
        int externalMarks1 = scanner.nextInt();

        System.out.println("Enter external marks 2:");
        int externalMarks2 = scanner.nextInt();

        Results s = new Results(name, rollNo, internalMarks1, internalMarks2, externalMarks1, externalMarks2);

        s.displayStudentInfo();
        s.calculateResult();

        scanner.close();
    }
}
class Stud {
    String name;
    int rollNo;
    int internalMarks1;
    int internalMarks2;
    int externalMarks1;

    int externalMarks2;

    Stud(String name, int rollNo, int internalMarks1, int internalMarks2, int externalMarks1, int externalMarks2) {
        this.name = name;
        this.rollNo = rollNo;
        this.internalMarks1 = internalMarks1;
        this.internalMarks2 = internalMarks2;
        this.externalMarks1 = externalMarks1;
        this.externalMarks2 = externalMarks2;
    }

    void displayStudentInfo() {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNo);
    }
    void study() {
        System.out.println(name + " is studying.");
    }

}
class Internal extends Stud {

    Internal(String name, int rollNo, int m1, int m2, int m3, int m4) {
        super(name, rollNo, m1, m2, m3, m4);
    }
    void displayInternalMarks() {
        System.out.println("Internal Marks 1: " + internalMarks1);
        System.out.println("Internal Marks 2: " + internalMarks2);
    }

}
class External extends Stud {

    External(String name, int rollNo, int m1, int m2, int m3, int m4) {
        super(name, rollNo, m1, m2, m3, m4);
    }
    void displayExternalMarks() {
        System.out.println("External Marks 1: " + externalMarks1);
        System.out.println("External Marks 2: " + externalMarks2);
    }

}
class Results extends External {

    Results(String name, int rno, int imarks1, int imarks2, int emarks1, int emarks2) {
        super(name, rno, imarks1, imarks2, emarks1, emarks2);
    }
    void calculateResult() {
        int totalMarks = internalMarks1 + internalMarks2 + externalMarks1 + externalMarks2;
        if (totalMarks >= 200)
            System.out.println(name + " pass");
        else
            System.out.println(name + " fail");
    }

}
