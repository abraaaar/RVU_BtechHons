public class Order {
    private int orderId;
    private String orderedFoods;
    private String status;

    public Order() {
        status = "Ordered";
    }

    public Order(int orderId, String orderedFoods) {
        this.orderId = orderId;
        this.orderedFoods = orderedFoods;
        status = "Ordered";
    }

    public int getOrderId() {
        return orderId;
    }

    public String getOrderedFoods() {
        return orderedFoods;
    }

    public String getStatus() {
        return status;
    }

    public static void main(String[] args) {
        Order order1 = new Order();
        System.out.println("Status: " + order1.getStatus());

        Order order2 = new Order(123, "Pizza");
        System.out.println("Order ID: " + order2.getOrderId());
        System.out.println("Ordered Foods: " + order2.getOrderedFoods());
        System.out.println("Status: " + order2.getStatus());
    }

}