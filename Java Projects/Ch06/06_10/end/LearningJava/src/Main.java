public class Main {

    public static void main(String[] args) {
        StudentProfile profileOne = new StudentProfile("Sally",
                "Salmon", "Film",
                3.75, 2021);

        StudentProfile profileTwo = new StudentProfile("Max",
                "Tiffen", "Computer Science",
                3.45, 2024);

        profileOne.incrementExpectedYearToGraduate();
        System.out.println(profileOne.expectedYearToGraduate);
    }
}
