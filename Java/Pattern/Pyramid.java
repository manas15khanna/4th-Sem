import java.util.Scanner;

public class Pyramid {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int number;
    System.out.println("Enter the Height of the Star");
    number = s.nextInt();
    for (int i = 1; i <= number; i++) {
      for (int j=1; j <= i; j++){
        System.out.print('*');
      }
      System.out.print('\n');
    }
  }
}
