import java.util.Scanner;

public class HelloWorld {

    public static void announceTeaTime() {
        System.out.println("Waiting for tea time...");
        System.out.println("Type in random word and press Enter" +
                " to start tea time");
        Scanner input = new Scanner(System.in);
        input.next();
        System.out.println("It's tea time!");
    }

    public static void main(String[] args) {
        System.out.println("Welcome to your new job");
        announceTeaTime();

        System.out.println("Write code");
        System.out.println("Review code");
        System.out.println("Learn stuff");

        announceTeaTime();

        System.out.println("Get promoted!");
    }
}
