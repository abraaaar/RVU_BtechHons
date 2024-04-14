import java.util.Scanner;
public class Question2 {
    public static void main(String[] args)
    {
        System.out.print("Even numbers between 50 and 80: ");
        for (int i = 50; i<=80; ++i)
        {
            if (i % 2  == 0)
            {
                System.out.print(i+ " ");
            }
        }
    }
}
