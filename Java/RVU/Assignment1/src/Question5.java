import java.sql.SQLOutput;
import java.util.Scanner;
public class Question5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        float len = sc.nextFloat();
        System.out.print("Enter breath: ");
        float bre = sc.nextFloat();
        float peri = 2*(len+bre);
        System.out.printf("Perimeter = %.1f", peri);
    }
}
