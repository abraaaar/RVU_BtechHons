class Customer {
    String cname = "Abrar Hussain";
    String accno = "123456789";
    String branch = "Main Branch";
    String bank = "RVU Bank";
    public static void main(String[] args) {
        Savings savingsAccount = new Savings();
        savingsAccount.deposits(1000.0);
        savingsAccount.interest();
        savingsAccount.display();

        Current currentAccount = new Current();
        currentAccount.depositc(2000.0);
        currentAccount.withdrawc(500.0);
        currentAccount.displayc();
    }
}

class Savings extends Customer {
    double initial = 0.0, deposit, balance, withdrawal;

    void deposits(double amount) {
        deposit = amount;
        balance += deposit;
    }

    void withdraws(double amount) {
        withdrawal = amount;
        balance -= withdrawal;
    }

    void interest() {
        balance += 0.006 * balance;
    }

    void display() {
        System.out.println("Savings Account Balance: " + balance);
    }
}

class Current extends Customer {
    double initialc = 0.0, depositc, balancec, withdrawlc;

    void depositc(double amount) {
        depositc = amount;
        balancec += depositc;
    }

    void withdrawc(double amount) {
        withdrawlc = amount;
        balancec -= withdrawlc;
    }

    void displayc() {
        System.out.println("Current Account Balance: " + balancec);
    }
}