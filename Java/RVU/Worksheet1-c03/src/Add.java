public class Add {
  public int add(int a, int b) {
    return a + b;
  }

  public float add(int a, int b, float c) {
    return a + b + c;
  }

  public int add(int a, int b, int c) {
    return a + b + c;
  }

  public static void main(String[] args) {
    Add addObj = new Add();

    int sum1 = addObj.add(2, 3);
    System.out.println("Sum of two integers: " + sum1);

    float sum2 = addObj.add(2, 3, 1.5f);
    System.out.println("Sum of two integers and one float: " + sum2);

    int sum3 = addObj.add(2, 3, 4);
    System.out.println("Sum of three integers: " + sum3);
  }
}
