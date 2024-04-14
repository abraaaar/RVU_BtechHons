public class Q2 {
    public static void main(String[] args) {
        Football football = new Football();
        football.play();

        Volleyball volleyball = new Volleyball();
        volleyball.play();

        Basketball basketball = new Basketball();
        basketball.play();
    }
}
interface Playable {
    // Abstract method
    void play();
}
class Football implements Playable {
    public void play() {
        System.out.println("Playing Football");
    }
}
class Volleyball implements Playable {
    public void play() {
        System.out.println("Playing Volleyball");
    }
}
class Basketball implements Playable {
    public void play() {
        System.out.println("Playing Basketball");
    }
}
