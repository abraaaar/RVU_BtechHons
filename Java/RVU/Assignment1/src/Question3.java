import java.sql.SQLOutput;
import java.util.Scanner;
public class Question3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int n1 = sc.nextInt();
        System.out.print("Select any one operation: (+ , - , * , /): ");
        char ope = sc.next().charAt(0);
        System.out.print("Enter second number: ");
        int n2 = sc.nextInt();
        switch(ope) {
            case '+':
                System.out.println(n1 + " " + ope + " " + n2 + " = " + (n1+n2));
                break;
            case '-':
                System.out.println(n1 + " " + ope + " " + n2 + " = " + (n1-n2));
                break;
            case '*':
                System.out.println(n1 + " " + ope + " " + n2 + " = " + (n1*n2));
                break;
            case '/':
                float n1f = (float)  n1;
                float n2f = (float) n2;
                System.out.printf("%.0f %c %.0f = %.1f",n1f, ope, n2f, n1f/n2f);
                break;
            default:
                System.out.println("Invalid input");
        }
    }
}
