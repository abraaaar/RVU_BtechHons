import java.util.Scanner;
public class Question2 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = sc.nextInt();

        for (int i = 1; i<= row; ++i)
        {
            for (int j = (i-1) * 2 ; j < (row*2) - 2 ; j++)
            {
                System.out.print(" ");
            }
            for (int k = -i; k <= i ; ++k)
            {
                if (k == 0)
                    continue;
                if (k == -1)
                    continue;
                System.out.print(Math.abs(k)+" ");
            }
            System.out.println();
        }



    }

}
