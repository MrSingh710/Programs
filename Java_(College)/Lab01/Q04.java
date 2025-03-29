import java.util.Scanner;

public class Q04 {

    public static void main(String[] args) {

        System.out.println("Enter the nubmer whose digits is to be summed: ");
        Scanner s = new Scanner(System.in);
        int num = s.nextInt();
        s.close();

        int sum = 0;
        int n = num;
        int digit = 0;
        while(n != 0) {

            digit = n % 10;
            sum = sum + digit;
            n = n / 10;

        }

        System.out.println("Sum of digits of number " + num + " = " + sum);

    }
    
}
