import java.util.Scanner;

public class HelloWorld {

    public static void main(String args[]) {
        String question = "What is the largest planet in the solar system";
        String choiceOne = "earth";
        String choiceTwo = "jupiter";
        String choiceThree = "saturn";

        String correctAnswer = choiceTwo;

        // TODO: Write a print statement asking the question
        System.out.println(question);

        // TODO: Write a print statement giving the answer choices
        System.out.println("Choose one of the following: " + choiceOne +
        ", " + choiceTwo + ", or " + choiceThree);

        // TODO: Have the user input an answer
        Scanner scanner = new Scanner(System.in);
        // TODO: Retrieve the user's input
        String input = scanner.next();

        // TODO: If the user's input matches the correctAnswer...
        if (correctAnswer.equals(input.toLowerCase())) {
            // TODO: then the user is correct and we want to print out a
            //  congrats message to the user.
            System.out.println("Congrats! That's the correct answer");
        } else {
            // TODO: If the user's input does not match the correctAnswer...
            // TODO: then the user is incorrect and we want to print out a
            //  message saying that the user is incorrect as well as what the
            //  correct choice was.
            System.out.println("You are incorrect. The correct answer is " +
                    correctAnswer);
        }
    }
}
