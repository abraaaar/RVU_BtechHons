// Define an interface
interface Printable {
  void print();
}

// Define a new interface
interface Drawable {
  void draw();
}

// Define a class that implements the Printable interface
class Printer implements Printable {
  @Override
  public void print() {
    System.out.println("Printing...");
  }
}

// Define a parent class that implements the Drawable interface
class Shape implements Drawable {
  @Override
  public void draw() {
    System.out.println("Drawing a shape");
  }
}

// Define a child class that extends the Shape class and implements the Printable interface
class Circle extends Shape implements Printable {
  @Override
  public void print() {
    System.out.println("Printing a circle");
  }
}

// Define a new child class that extends the Shape class and implements both Printable and Drawable interfaces
class Rectangle extends Shape implements Printable, Drawable {
  @Override
  public void print() {
    System.out.println("Printing a rectangle");
  }

  @Override
  public void draw() {
    System.out.println("Drawing a rectangle");
  }
}

// Main class
public class Main {
  public static void main(String[] args) {
    // Create an instance of the Printer class
    Printer printer = new Printer();
    printer.print();

    // Create an instance of the Circle class
    Circle circle = new Circle();
    circle.draw();
    circle.print();

    // Create an instance of the Rectangle class
    Rectangle rectangle = new Rectangle();
    rectangle.draw();
    rectangle.print();
  }
}