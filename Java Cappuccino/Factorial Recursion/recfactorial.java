//Creating a class recfactorial and adding the recursion factorial function inside it

public class recfactorial {
  public static int factorial(int n) {
    if (n == 0 || n == 1) {
      return 1;
    }
    return n * factorial(n - 1);
  }
}

