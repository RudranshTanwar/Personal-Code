import java.util.Scanner;

public class HelloWorld {

    public static void main(String args[]) {
        String question = "What is the largest planet in our solar system";
        String choiceOne = "Earth";
        String choiceTwo = "Jupiter";
        String choiceThree = "Saturn";

        String correctAnswe = answerThree;

        // Write a print statement asking the question
        System.out.println(question);

        // Write a print statement giving the answer choices
        System.out.println("Choose one of the following: " +
                choiceOne + ", " + choiceTwo + ", or " +
                choiceThree + ".")

        // Have the user input an answer
        // Retrieve the user's input
        Scanner scanner = new Scanner(System.in);
        String input = scanner.next();

        // If the user's input matches the correctAnswer...
        if (correctAnswer.equals(input.toLowerCase()) {
            // then the user is correct and we want to print
            // out a congrats message to the user.
            System.out.println("Congrats! That’s the correct answer.");
        } else {
            // If the user's input does not match the correctAnswer…
            // then the user is incorrect and we want to print out a
            // message saying that the user is incorrect as well as
            // what the correct choice was.
            System.out.println("You are incorrect. The correct answer is "
                    + correctAnswer);
        }

    }
}
