import java.util.Scanner;
public class SumOfArrayElements {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        int[] array = new int[size];

        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<size; i++) {
            System.out.print("Element "+(i+1)+": ");
            array[i] = sc.nextInt();
        }

        int sum = 0;
        for(int num : array) {
            sum += num;
        }

        System.out.println("Sum of the array elements is: " + sum);
    }
}