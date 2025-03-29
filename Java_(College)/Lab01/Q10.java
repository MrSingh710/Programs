public class Q10 {
    public static void main(String[] args) {
        int N = 1000;
        System.out.println("Armstrong numbers from 1 to " + N + " are:");
        
        for (int i = 1; i <= N; i++) {
            if (isArmstrong(i)) {
                System.out.print(i + " ");
            }
        }
    }
    
    public static boolean isArmstrong(int num) {
        int sum = 0, temp = num, digits = 0;
        
        // Count the number of digits
        while (temp > 0) {
            temp /= 10;
            digits++;
        }
        
        temp = num;
        
        // Calculate the sum of digits raised to the power of total digits
        while (temp > 0) {
            int digit = temp % 10;
            sum += Math.pow(digit, digits);
            temp /= 10;
        }
        
        return sum == num;
    }
}