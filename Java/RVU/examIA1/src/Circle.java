public class Circle {
    double radius;
    int bruh =5;

    // Default constructor (no arguments)
    public Circle() {
        this(0.0); // Call overloaded constructor with default radius
    }

    // Parameterized constructor
    public Circle(double radius) {
        this.radius = radius;
    }

    // Method to calculate area
    public double calculateArea() {
        int a = 5;
        return Math.PI * radius * radius;
    }

    public static void main(String[] args) {
        // Create objects using different constructors
        Circle circle1 = new Circle();
        Circle circle2 = new Circle(5.0);
        circle1.radius =5;

        System.out.println("Area of circle1: " + circle1.calculateArea());
        System.out.println("Area of circle2: " + circle2.calculateArea());
        System.out.println("bruh : " + Circle.bruh);
    }

}
