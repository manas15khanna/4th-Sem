import java.util.Scanner;

public class CalculatorMain {
    public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      Calculator calculator = new Calculator();

      System.out.println("Enter Number 1: ");
      double num1 =  scanner.nextDouble();
      System.out.println("Enter Number 2: ");
      double num2 = scanner.nextDouble();

      System.out.println("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus");
      System.out.println("Choose option: ");
      int operator = scanner.nextInt();

      double result = calculator.calculate(num1, operator, num2);
      System.out.println("Result: " + result);
  }  
}
