public class Q2 {
    private double length;
    private double width;
    private double breadth;

    // Constructor
    public Q2(double length, double width, double breadth) {
        this.length = length;
        this.width = width;
        this.breadth = breadth;
    }

    public double calculateVolume() {
        return this.length * this.width * this.breadth;
    }
    public static void main(String[] args) {
        Q2 box = new Q2(3, 4, 5);
        double volume = box.calculateVolume();
        System.out.println("The volume of the box is: " + volume);
    }
}


