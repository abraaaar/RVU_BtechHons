class Q1 {
  public static void main(String args[]) {
    A obj = new A();
    obj.print();
  }

}

interface Printable {
  int wow = 0;
}

class A implements Printable {
  public void print() {
    int wow = 10;
    System.out.println(wow);
  }

}



