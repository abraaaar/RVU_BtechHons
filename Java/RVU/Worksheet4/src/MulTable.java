import java.util.Scanner;
public class MulTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        for (int wow = 1; wow <= 10; wow++)
        {
            System.out.println(num + " x " + wow + " = "+(num*wow));
        }
    }
}