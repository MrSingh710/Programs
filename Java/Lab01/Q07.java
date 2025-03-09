import java.util.Scanner;

public class Q07 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of terms (N): ");
        int n = scanner.nextInt();
        scanner.close();

        if (n <= 0) {
            System.out.println("Please enter a positive integer.");
            return;
        }

        System.out.println("Fibonacci Series using Loops:");
        generateFibonacci(n);
    }

    public static void generateFibonacci(int n) {
        int first = 0, second = 1;

        for (int i = 0; i < n; i++) {
            System.out.print(first + " ");
            int next = first + second;
            first = second;
            second = next;
        }
        System.out.println();
    }
}
