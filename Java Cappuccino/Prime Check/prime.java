public class prime {
  public static boolean isprime(int n) {
    if (n <= 1) {
      return false;}
// If any number divides `n' evenly, it is not a prime
    for (int i = 2; i <= Math.sqrt(n); i++) {
      if (n % i == 0)//If n is divisible by i, it is not prime {
        return false;
      }
    }
    return true;
  }
}

