public class Q1 {
    public static void main(String[] args) {
        Result student1 = new Result("Abrar", 4, 99, 98, 100);
        student1.display();
    }
}
interface Exam {
    // Abstract method
    void percentage();

}
class Student {
    String name;
    int rollNo;
    int marks1, marks2, marks3;
    Student(String name, int rollNo, int marks1, int marks2, int marks3) {
        this.name = name;
        this.rollNo = rollNo;
        this.marks1 = marks1;
        this.marks2 = marks2;
        this.marks3 = marks3;
    }
}
class Result extends Student implements Exam {
    Result(String name, int rollNo, int marks1, int marks2, int marks3) {
        super(name, rollNo, marks1, marks2, marks3);
    }
    public void percentage() {
        int total = marks1 + marks2 + marks3;
        float percent = (float) total / 300 * 100;
        System.out.println("Percentage: " + percent + "%");
    }
    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);
        percentage();
    }
}
