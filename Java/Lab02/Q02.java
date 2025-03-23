import java.util.Scanner;

public class Q02 {
    // Recursive function to reverse a string
    public static String reverseString(String str) {
        if (str.isEmpty()) // Base case: if the string is empty, return empty string
            return str;
        return reverseString(str.substring(1)) + str.charAt(0); // Recursive call
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        scanner.close();

        System.out.println("Reversed string: " + reverseString(input));
    }
}
