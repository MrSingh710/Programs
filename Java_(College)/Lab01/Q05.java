import java.util.Scanner;

public class Q05 {

    public static void main (String[] args) {

        System.out.println("Enter the number: ");
        Scanner s = new Scanner(System.in);
        int num = s.nextInt();
        s.close();

        System.out.println("Reverse of the number is: " + reverse(num));

    }

    public static int reverse(int num) {
        int rev = 0;
        while (num != 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        return rev;
    }
    
}
