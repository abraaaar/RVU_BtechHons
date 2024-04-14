class Q1 {
    double localCallRate;
    double isdCallRate;
    double netPackageCost;
    Q1() {
        this.localCallRate = 0.10; // 10 paisa per call
        this.isdCallRate = 1.00; // Rs 1.00 per call
        this.netPackageCost = 500; // Rs 500 per 1 GB
    }
    Q1(double localCallRate, double isdCallRate, double netPackageCost) {
        this.localCallRate = localCallRate;
        this.isdCallRate = isdCallRate;
        this.netPackageCost = netPackageCost;
    }
    public double calculateBill(int localCalls, int isdCalls, int netUsage) {
        return (localCalls * localCallRate) + (isdCalls * isdCallRate) + (netUsage * netPackageCost);
    }
    public static void main(String[] args) {
        Q1 a = new Q1();
        System.out.println(a.calculateBill(100, 10, 5));
        Q1 b = new Q1(0.20, 2.00, 1000);
        System.out.println(b.calculateBill(100, 10, 5));
    }
}
