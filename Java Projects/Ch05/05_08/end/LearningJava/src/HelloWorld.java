public class HelloWorld {

    public static double salaryCalculator(double hoursPerWeek,
                                          double amountPerHour,
                                          double vacationDays) {
        if (hoursPerWeek < 0 || amountPerHour < 0) {
            return 0;
        }

        double weeklyPaycheck = hoursPerWeek * amountPerHour;
        double unpaidTime = vacationDays * 8 * amountPerHour;
        return weeklyPaycheck * 52 - unpaidTime;
    }

    public static void main(String[] args) {
        double salary = salaryCalculator(40,
                15, 8);
        System.out.println(salary);
    }
}
