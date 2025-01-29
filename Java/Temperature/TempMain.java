import java.util.Scanner; 

//Creating a class and adding `psvm' inside

class TempMain{
  public static void main(String[] args) {
    Scanner number = new Scanner(System.in);
    System.out.println("Enter the temperature in Celcius:");
    double num = number.nextInt();
    Temperature temu=new Temperature();
    double answer=temu.celcius(num);
    System.out.println(num + "Celcius converted to Farhenheit is " + answer);
    }
}
