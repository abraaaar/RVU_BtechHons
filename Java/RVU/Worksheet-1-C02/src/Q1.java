import java.util.Scanner;
public class Q1 {
    double width;
    double height;
    double depth;

    Q1(double w, double h, double d) {
        width = w;
        height = h;
        depth = d;
    }

    double volume() {
        return width * height * depth;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the width: ");
        double w = sc.nextDouble();
        System.out.print("Enter the height: ");
        double h = sc.nextDouble();
        System.out.print("Enter the depth: ");
        double d = sc.nextDouble();

        Q1 MyBox = new Q1(w, h, d);
        System.out.println("Volume is " + MyBox.volume());
    }
}