class Vehicle {
    String make = "Default Make";
    String model = "Default Model";
    int year = 2022;
    String fuelType = "Default Fuel Type";

    void fuelEfficiency(double distance, double fuelConsumed) {
        System.out.println("Fuel Efficiency: " + (distance / fuelConsumed));
    }

    void mileage(double distance, double fuelConsumed) {
        System.out.println("Mileage: " + (distance / fuelConsumed));
    }
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle();
        vehicle.fuelEfficiency(100.0, 5.0);
        vehicle.mileage(50, 2);

        Bike bike = new Bike();
        bike.initialize("Suzuki", "XXX");
        bike.fuelEfficiency(250.0, 10.0);
        bike.mileage(20, 1);
    }
}

class Bike extends Vehicle {
    void initialize(String make, String model) {
        this.make = make;
        this.model = model;
        System.out.println(make + " " + model);
    }
}

class Car extends Vehicle {
    String transmission = "Automatic";
    int numberOfDoors = 4;

    void accelerate() {
        System.out.println("Car is accelerating");
    }

    void brake() {
        System.out.println("Car is braking");
    }
}
