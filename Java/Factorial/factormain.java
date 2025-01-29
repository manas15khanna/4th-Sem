import java.util.Scanner;
//Creating a public class with a 'psvm'(public status void main)
public class factormain {
  public static void main(String[] args) 
  { 
    System.out.println("Enter the number:");
    //Declaring the Scanner
    Scanner number = new Scanner(System.in);
    //Scanning for the number 
    int num = number.nextInt();
    //Calling the function and showing the output
    System.out.println("Factorial of " + num + " is " + factorial.factorial(num)); 
  }
}

