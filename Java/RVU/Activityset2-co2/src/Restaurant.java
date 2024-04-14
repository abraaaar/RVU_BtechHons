import java.util.Scanner;
public class Restaurant {
    private String restaurantName;
    private long restaurantContact;
    private String restaurantAddress;
    private float rating;
    public void displayRestaurantDetails() {
        System.out.println("\nRestaurant Details");
        System.out.println("********************");
        System.out.println("Restaurant Name : " + restaurantName);
        System.out.println("Restaurant Rating : " + rating);
        System.out.println("Restaurant Contact : " + restaurantContact);
        System.out.println("Restaurant Address : " + restaurantAddress);
    }
    // Getters and Setters for the instance variables
    public String getRestaurantName() {
        return restaurantName;
    }
    public void setRestaurantName(String restaurantName) {
        this.restaurantName = restaurantName;
    }
    public long getRestaurantContact() {
        return restaurantContact;
    }
    public void setRestaurantContact(long restaurantContact) {
        this.restaurantContact = restaurantContact;
    }
    public String getRestaurantAddress() {
        return restaurantAddress;
    }
    public void setRestaurantAddress(String restaurantAddress) {
        this.restaurantAddress = restaurantAddress;
    }
    public float getRating() {
        return rating;
    }

    public void setRating(float rating) {
        this.rating = rating;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Restaurant restaurant = new Restaurant();
        System.out.print("Enter restaurant name: ");
        String name = scanner.nextLine();
        restaurant.setRestaurantName(name);
        System.out.print("Enter restaurant contact: ");
        long contact = scanner.nextLong();
        restaurant.setRestaurantContact(contact);
        scanner.nextLine();
        System.out.print("Enter restaurant address: ");
        String address = scanner.nextLine();
        restaurant.setRestaurantAddress(address);
        System.out.print("Enter restaurant rating: ");
        float rating = scanner.nextFloat();
        restaurant.setRating(rating);
        restaurant.displayRestaurantDetails();
    }
}
