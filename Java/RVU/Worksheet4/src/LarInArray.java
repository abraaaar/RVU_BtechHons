import java.util.Scanner;
public class LarInArray {
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

        int lar = array[0];
        int index = 0;
        for(int i = 1; i<size; ++i) {
            if (array[i]>lar)
            {
                lar = array[i];
                index = i;
            }
        }

        System.out.println("Largest Element: " + lar + " at index "+ index);
    }
}