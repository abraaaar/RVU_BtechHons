import java.util.Scanner;
class Box {
    double width;
    double height;
    double depth;

    Box(double wid, double hei, double dep) {
        String text = "Constructing Bar....\n";
        for (char c : text.toCharArray()) {
            System.out.print(c);
            try {
                Thread.sleep(120); // Sleep for 500 milliseconds
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        width = wid;
        height = hei;
        depth = dep;
    }

    double volume() {
        return width * height * depth;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double w, h, d, vol;
        char ans;
        do {
            System.out.print("Enter the width: ");
            w = sc.nextDouble();
            System.out.print("Enter the height: ");
            h = sc.nextDouble();
            System.out.print("Enter the depth: ");
            d = sc.nextDouble();
            Box mybox = new Box(w, h, d);
            vol = mybox.volume();
            System.out.println("Volume of the first box is " + vol);
            System.out.print("\nDo you want to continue? (y/n): ");
            ans = sc.next().charAt(0);
        }while(ans == 'y' || ans == 'Y');
    }
}
