import java.util.Scanner;
import java.math.*;
public class Q2 {
    double radius;
    public Q2(double radius) {
        this.radius = radius;
    }

    double perimeter() {
        return 2 * Math.PI * radius;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        double r = sc.nextDouble();
        Q2 MyBox = new Q2(r);
        System.out.printf("Perimeter is %.2f", MyBox.perimeter());
    }
}