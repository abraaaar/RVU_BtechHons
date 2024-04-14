class Student {
    int rollno;
    String name, dept, college; // General details

    void insert(int r, String n, String d, String c) {
        rollno = r;
        name = n;
        dept = d;
        college = c;
    }
    public static void main(String args[]) {
        Sports ob = new Sports();
        ob.insert(4, "Abrar", "CSE", "RVU");
        ob.markDetails();
        ob.display();
    }
}

class Test extends Student {
    int[] m = {80, 89, 87, 86, 90};
    double avg, total = 0;

    void markDetails() {
        for (int i = 0; i < m.length; i++) {
            total += m[i];
        }
        avg = total / m.length;
    }
}

class Sports extends Test {
    String sname = "Football";
    String winner = "Team A";
    String runner = "Team B";
    String teamNo = "123";

    void display() {
        System.out.println("General Details:");
        System.out.println("Roll No: " + rollno);
        System.out.println("Name: " + name);
        System.out.println("Department: " + dept);
        System.out.println("College: " + college);

        System.out.println("\nTest Details:");
        System.out.println("Total Marks: " + total);
        System.out.println("Average Marks: " + avg);

        System.out.println("\nSports Details:");
        System.out.println("Sport Name: " + sname);
        System.out.println("Winner: " + winner);
        System.out.println("Runner: " + runner);
        System.out.println("Team No: " + teamNo);
    }
}