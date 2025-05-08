public class CustomerException {
  public static void validate(int age)
  {
    if(age<18){
      throw new ArithmeticException("Person is not eligible");
    }
    else {
      System.out.println("Peron is not eligible to vote");
    }
  }
  public static void main(String[] args) {
    //Todo Auto-generated method stud 
    validate(13);
    System.out.println("In Main");
  }
}
