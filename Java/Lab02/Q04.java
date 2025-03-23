import java.util.Scanner;

public class Q04 {
    // Recursive function to find GCD using Euclidean Algorithm
    public static int findGCD(int a, int b) {
        if (b == 0) // Base case: when b becomes 0, a is the GCD
            return a;
        return findGCD(b, a % b); // Recursive call
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();
        scanner.close();

        int gcd = findGCD(num1, num2);
        System.out.println("GCD of " + num1 + " and " + num2 + " is: " + gcd);
    }
}
