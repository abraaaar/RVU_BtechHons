public class SalesJob {
    public static void main(String[] args) {
        double baseSalary = 5000;
        double finalS = 30000;
        double sales = 0;
        double salary = baseSalary;

        while (salary < finalS) {
            sales += 0.01;
            if (sales <= 5000) {
                salary = baseSalary + sales * 0.08;
            } else if (sales <= 10000) {
                salary = baseSalary + 5000 * 0.08 + (sales - 5000) * 0.10;
            } else {
                salary = baseSalary + (5000 * 0.08) + (5000 * 0.10) + (sales - 10000) * 0.12;
            }
        }
        System.out.printf("Minimum sales to generate in order to earn $30,000: $%.2f", sales);
    }
}