import java.sql.SQLOutput;
import java.util.Scanner;
public class Question4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number between 0 and 1000: ");
        int wow = sc.nextInt();
        if (wow < 0 || wow > 1000)
        {
            System.out.println("Invalid Input");
            System.exit(0);
        }
        int sum = 0;
        int num = wow;
        do {
            int rem = wow%10;
            sum+=rem;
            wow-=rem;
            wow/=10;
        }
        while (wow !=0);
        System.out.println("Sum of all digits of " + num + " is " + sum);
    }
}
