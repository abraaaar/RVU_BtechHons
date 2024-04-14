import java.util.Scanner;
public class InsertEleInArray {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        int[] array = new int[size];

        System.out.println("Enter the Elements in the Array:");
        for (int i = 0; i<size; ++i)
        {
            System.out.print("At index " + i + ": ");
            array[i] = sc.nextInt();
        }

        while (true)
        {
            System.out.print("Do you want to insert(y/n): ");
            char ans = sc.next().charAt(0);
            if (ans == 'y' || ans == 'Y')
            {
                System.out.print("Enter the element to be inserted: ");
                int ele = sc.nextInt();
                int index = -1;
                while (true) {
                    System.out.print("Enter the index: ");
                    index = sc.nextInt();
                    if (index >= 0 && index < size)
                    {
                        break;
                    }
                    else {
                        System.out.println("Invalid Index, Write in Range 0 to "+(size));
                    }
                }
                int[] newArray = new int[size + 1];
                for (int i = 0; i < index; i++) {
                    newArray[i] = array[i];
                }
                newArray[index] = ele;
                for (int i = size-1; i != index; i--)
                {
                    newArray[i]=array[i-1];
                }
                array = newArray;
                size++;
                System.out.print("\nNew Array: ");
                for (int i = 0; i<size; ++i)
                {
                    System.out.print(array[i]+" ");
                }
                System.out.println();
            }
            else if (ans == 'n' || ans == 'N')
            {
                break;
            }
            else
            {
                System.out.println("Invalid Input, Try Again");
            }
        }
    }
}
