import java.util.Scanner;
public class PrintPrime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int num = sc.nextInt();
        System.out.println("List of primes till " + num +": ");
        int count = 0;
        for (int i = 2; i<=num; ++i)
        {
            if (isPrime(i))
            {
                count++;
                System.out.print(i + " ");
                if (count == 10)
                {
                    count = 0;
                    System.out.println();
                }
            }
        }

    }
    public static boolean isPrime(int num) {
        if (num % 2 == 0 && num != 2) {
            return false;
        } else {
            for (int i = 3; i <= Math.sqrt(num); i += 2) {
                if (num % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }
}