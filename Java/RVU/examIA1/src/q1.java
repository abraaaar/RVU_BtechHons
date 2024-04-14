public class q1 {
    public static void main(String[] args) {
        int[] array = {1, 2, 3,4, 5};
        int[][] array2 = {{1, 2, 3}, {4, 5, 6}};
        for (int i: array) {
            System.out.println(i);
        }
        for (int[] i: array2) {
            for (int j: i) {
                System.out.println(j);
            }
        }
    }
}
