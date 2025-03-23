import java.util.Scanner;

public class Q05{
    // Function to add two binary numbers recursively
    public static String addBinary(String a, String b, int carry) {
        // Base case: when both strings are empty and no carry left
        if (a.isEmpty() && b.isEmpty() && carry == 0) {
            return "";
        }

        // Take the last digit of both strings (or 0 if the string is empty)
        int digitA = (a.isEmpty()) ? 0 : a.charAt(a.length() - 1) - '0';
        
        int digitB = (b.isEmpty()) ? 0 : b.charAt(b.length() - 1) - '0';    
        // Sum the digits with carry
        int sum = digitA + digitB + carry;

        // The new carry is 1 if sum is greater than or equal to 2, otherwise 0
        carry = sum / 2;

        // The current binary digit is sum % 2
        char currentDigit = (char) (sum % 2 + '0');

        // Recursively call the function for the next digits
        return addBinary(a.length() > 1 ? a.substring(0, a.length() - 1) : "",
                         b.length() > 1 ? b.substring(0, b.length() - 1) : "", carry) + currentDigit;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first binary number: ");
        String binary1 = scanner.nextLine();
        System.out.print("Enter the second binary number: ");
        String binary2 = scanner.nextLine();
        scanner.close();

        // Call the recursive function to add binary numbers
        String result = addBinary(binary1, binary2, 0);
        
        System.out.println("Sum of the two binary numbers: " + result);
    }
}
