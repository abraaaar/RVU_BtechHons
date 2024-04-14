import java.sql.SQLOutput;
import java.util.Scanner;
public class AddTwoMatrices {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the rows of the matrices: ");
        int rows = sc.nextInt();
        System.out.print("Enter the columms of the matrices: ");
        int cols = sc.nextInt();
        int[][] m1 = new int[rows][cols];

        System.out.println("Enter the elements of matrix 1: ");
        for(int i=0; i<rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("Element at index [" + (i + 1) + "]["+ (j+1)+"]: ");
                m1[i][j] = sc.nextInt();
            }
        }
        System.out.println();
        int[][] m2 = new int[rows][cols];
        System.out.println("Enter the elements of matrix 2: ");
        for(int i=0; i<rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("Element at index [" + (i + 1) + "]["+ (j+1)+"]: ");
                m2[i][j] = sc.nextInt();
            }
        }

        for(int i=0; i<rows; i++) {
            for (int j = 0; j < cols; j++) {
                m2[i][j]+= m1[i][j];
            }
        }
        System.out.println();
        System.out.println("Final SUM MATRIX: ");
        for(int i=0; i<rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(m2[i][j]+"\t");
            }
            System.out.println();
        }

    }
}