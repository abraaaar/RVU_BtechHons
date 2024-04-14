import java.util.Scanner;
class Car {
    String company_name;
    String model_name;
    int year;
    double mileage;

    public void assign(String company, String model, int carYear, double carMileage) {
        company_name = company;
        model_name = model;
        year = carYear;
        mileage = carMileage;
    }

    public void display() {
        System.out.println("\nCar details:");
        System.out.println("-------------");
        System.out.println("Company: " + company_name);
        System.out.println("Model: " + model_name);
        System.out.println("Year: " + year);
        System.out.println("Mileage: " + mileage);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Car car = new Car();
        System.out.print("Enter company name: ");
        String company = scanner.nextLine();
        System.out.print("Enter model name: ");
        String model = scanner.nextLine();
        System.out.print("Enter year: ");
        int year = scanner.nextInt();
        System.out.print("Enter mileage: ");
        double mileage = scanner.nextDouble();
        car.assign(company, model, year, mileage);
        car.display();
    }
}