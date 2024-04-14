import java.util.Scanner;

public class ReverseArray {
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

        System.out.println("Original array: ");
        for(int num : array) {
            System.out.print(num + " ");
        }

        System.out.println("\nReversed array: ");
        for(int i=size-1; i>=0; i--) {
            System.out.print(array[i] + " ");
        }
    }
}
