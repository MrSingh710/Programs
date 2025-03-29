import java.util.Scanner;

public class Q09 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Taking user input
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        
        // Calculating square of the number
        int square = num * num;
        
        // Checking if the square ends with the number itself
        if (isAutomorphic(num, square)) {
            System.out.println("Yes, it's an Automorphic Number");
        } else {
            System.out.println("No, it's not an Automorphic Number");
        }
        
        scanner.close();
    }
    
    public static boolean isAutomorphic(int num, int square) {
        // Converting numbers to strings to check suffix
        String numStr = String.valueOf(num);
        String squareStr = String.valueOf(square);
        
        return squareStr.endsWith(numStr);
    }
}