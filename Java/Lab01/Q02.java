import java.util.Scanner;

public class Q02 {

    public static void main (String[] args) {

        System.out.println("Enter a number: ");
        Scanner scn = new Scanner(System.in);

        int num = scn.nextInt();

        if(num % 2 == 0) {

            System.out.println("Number " + num + " is even");

        }    
        else {

            System.out.println("Number " + num + " is odd");
        }

        scn.close();
    
    }

    
    
}
