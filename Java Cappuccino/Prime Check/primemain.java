import java.util.Scanner; 
class primemain{ 
  public static void main(String[] args) {
    Scanner number = new Scanner(System.in);
    System.out.println("Enter a number:");
    int num = number.nextInt();

    if(prime.isprime(num)){
      System.out.println(num + " is Prime");
    }
    else{
      System.out.println(num + " is not Prime");
    }
  }
}
