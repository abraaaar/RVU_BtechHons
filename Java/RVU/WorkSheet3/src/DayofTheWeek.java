import java.util.Scanner;
public class DayofTheWeek {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int num;
        while (true) {
            System.out.print("Enter a number between 1 and 7: ");
            num = sc.nextInt();
            if (num > 7 || num < 1)
                System.out.println("Invalid Input, Enter Again");
            else
                break;
        }
        switch(num) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
        }
    }
}
