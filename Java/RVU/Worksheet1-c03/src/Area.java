public class Area {
    public static void main(String[] args) {
        double circleArea = calculateArea(5.0);
        double rectangleArea = calculateArea(4.0, 6.0);
        double triangleArea = calculateArea(3.0, 4.0, 5.0);

        System.out.printf("Area of Circle: %.2f\n", circleArea);
        System.out.println("Area of Rectangle: " + rectangleArea);
        System.out.println("Area of Triangle: " + triangleArea);
    }

    public static double calculateArea(double radius) {
        return Math.PI * radius * radius;
    }

    public static double calculateArea(double length, double width) {
        return length * width;
    }

    public static double calculateArea(double side1, double side2, double side3) {
        double semiPerimeter = (side1 + side2 + side3) / 2;
        return Math.sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
    }
    }
    

