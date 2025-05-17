import java.util.Scanner;

public class NumberConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int input = scanner.nextInt();
        // Autoboxing: primitive int to Integer object
        Integer number = input;
        // Binary, Octal, Hexadecimal representations
        String binary = Integer.toBinaryString(number);
        String octal = Integer.toOctalString(number);
        String hexadecimal = Integer.toHexString(number);
        // Unboxing: Integer object to primitive int
        int unboxedNumber = number;

        System.out.println("Binary representation: " + binary);
        System.out.println("Octal representation: " + octal);
        System.out.println("Hexadecimal representation: " + hexadecimal);
        System.out.println("Unboxed value: " + unboxedNumber);
        System.out.println("Integer MIN_VALUE: " + Integer.MIN_VALUE);
        System.out.println("Integer MAX_VALUE: " + Integer.MAX_VALUE);
        scanner.close();
    }
}
