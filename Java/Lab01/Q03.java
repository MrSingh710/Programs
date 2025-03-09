import java.util.Scanner;

public class Q03 {

    public static void main(String[] args) {

        System.out.println("Enter a number whose table is to be printed: ");
        Scanner scn = new Scanner(System.in);
        int num = scn.nextInt();

        for(int i = 1; i <= 10; i++) {

            System.out.println(num + " x " + i + " = " + num * i);

        }

        scn.close();
    }
    
}
