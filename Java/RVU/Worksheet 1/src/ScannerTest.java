import java.util.Scanner;
public class ScannerTest {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your roll no: ");
        int RollNo = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        System.out.print("Enter your fee: ");
        double fee = sc.nextDouble();
//        System.out.println("RollNo: "+RollNo+"\tName: "+name + "\tFee: "+fee);
        System.out.printf("RollNo: %d\tName: %s\tFee: %.3f",RollNo, name, fee);

    }
    }
