public class prime {
  public static boolean isprime(int n) {
    if (n <= 1) {
      return false;
    }
    for (int i = 2; i <= Math.sqrt(n); i++) {  // Corrected loop condition
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
}

