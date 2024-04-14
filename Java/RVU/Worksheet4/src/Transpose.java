import java.sql.SQLOutput;
import java.util.Scanner;
public class Transpose {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the rows of the matrix: ");
        int rows = sc.nextInt();
        System.out.print("Enter the columns of the matrix: ");
        int cols = sc.nextInt();
        int[][] m1 = new int[rows][cols];

        System.out.println("Enter the elements of matrix: ");
        for(int i=0; i<rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("Element at index [" + (i + 1) + "]["+ (j+1)+"]: ");
                m1[i][j] = sc.nextInt();
            }
        }
        System.out.println("ORIGINAL MARTIX");
        for(int i=0; i<rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(m1[i][j]+"\t");
            }
            System.out.println();
        }
        System.out.println("TRANSPOSED MATRIX");
        for(int i=0; i<cols; i++) {
            for (int j = 0; j<rows; j++) {
                System.out.print(m1[j][i]+"\t");
            }
            System.out.println();
        }
    }
}