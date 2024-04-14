import java.util.Scanner;

public class Assignment {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number to find its factorial: ");
        int num = sc.nextInt();
        int factorial = 1;
        for(int i = 1; i <= num; i++) {
            factorial *= i;
        }
        System.out.println("The factorial of " + num + " is " + factorial);


        System.out.println("Enter a number to check if it's even or odd: ");
        int checkNum = sc.nextInt();
        if(checkNum % 2 == 0) {
            System.out.println(checkNum + " is even.");
        } else {
            System.out.println(checkNum + " is odd.");
        }
    }
}
