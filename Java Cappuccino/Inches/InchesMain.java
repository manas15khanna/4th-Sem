import java.util.Scanner; 

class InchesMain{
  public static void main(String[] args) {
    Scanner number = new Scanner(System.in);
    System.out.println("Enter the distance in Inches: ");
    double num = number.nextInt();
    Inches convert=new Inches();
    double answer=convert.inch(num);
    System.out.println(num + " Inches converted to Meters is " + answer);
    }
}
