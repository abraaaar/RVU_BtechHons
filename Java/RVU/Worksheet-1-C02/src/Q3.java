import java.util.Scanner;
public class Q3 {
    double billAmount;
    public Q3(double billAmount) {
        this.billAmount = billAmount;
    }
    double calculateDiscount() {
        if (billAmount >= 1000) {
            return billAmount * 0.05; // 5% discount
        } else if (billAmount >= 500) {
            return billAmount * 0.02; // 2% discount
        } else if (billAmount > 0) {
            return billAmount * 0.01; // 1% discount
        } else {
            return 0;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the bill amount: ");
        double bill = sc.nextDouble();
        Q3 store = new Q3(bill);
        double discount = store.calculateDiscount();
        System.out.println("The discount is: " + discount);
        System.out.println("The final amount to pay is: " + (bill - discount));
    }
}