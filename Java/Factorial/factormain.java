import java.util.Scanner;

public class factormain {
  public static void main(String[] args) 
  { 
    System.out.println("Enter the number:");
    Scanner number = new Scanner(System.in);
    int num = number.nextInt();
    System.out.println("Factorial of " + num + " is " + factorial.factorial(num)); 
  }
}

