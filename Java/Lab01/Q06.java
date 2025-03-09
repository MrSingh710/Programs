import java.util.Scanner;

public class Q06 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a year: ");
        int year = scanner.nextInt();
        scanner.close();

        if (isLeapYear(year)) {
            System.out.println(year + " is a leap year.");
        } else {
            System.out.println(year + " is not a leap year.");
        }
    }

    public static boolean isLeapYear(int year) {
        // Leap year conditions
        if (year % 400 == 0) {
            return true; // Divisible by 400 -> Leap Year
        } else if (year % 100 == 0) {
            return false; // Divisible by 100 but not by 400 -> Not a Leap Year
        } else if (year % 4 == 0) {
            return true; // Divisible by 4 but not by 100 -> Leap Year
        } else {
            return false; // Not divisible by 4 -> Not a Leap Year
        }
    }
}

