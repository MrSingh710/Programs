import java.util.Scanner;

public class Q01 {
    // Recursive function to calculate sum
    public static int sumOfNaturalNumbers(int n) {
        if (n == 1) // Base case
            return 1;
        return n + sumOfNaturalNumbers(n - 1); // Recursive call
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a positive integer (n): ");
        int n = scanner.nextInt();
        scanner.close();

        if (n < 1) {
            System.out.println("Please enter a positive integer.");
        } else {
            System.out.println("Sum of first " + n + " natural numbers: " + sumOfNaturalNumbers(n));
        }
    }
}
