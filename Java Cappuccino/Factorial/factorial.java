//Creating a public class with the function to find the factorial

public class factorial {
  public static int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
      result *= i;
    }
    return result;
  }
}
