import java.util.Scanner;

public class Q03 {
    // Helper function to find the reverse of a number
    public static int reverseNumber(int num, int rev) {
        if (num == 0) // Base case: when num is fully reversed
            return rev;
        return reverseNumber(num / 10, rev * 10 + num % 10); // Recursive step
    }

    // Function to check if a number is palindrome
    public static boolean isPalindrome(int num) {
        if (num < 0) // Negative numbers are not palindromes
            return false;
        return num == reverseNumber(num, 0);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int num = scanner.nextInt();
        scanner.close();

        if (isPalindrome(num)) {
            System.out.println(num + " is a palindrome.");
        } else {
            System.out.println(num + " is not a palindrome.");
        }
    }
}
