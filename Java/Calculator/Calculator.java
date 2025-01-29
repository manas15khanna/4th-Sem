public class Calculator {
  public double calculate(double num1, int operator, double num2){
    double result = 0;
    switch (operator) {
      case 1:
        result=num1+num2;
        break;
      case 2:
        result=num1-num2;
        break;
      case 3:
        result=num1*num2;
        break;
      case 4:
        result=num1/num2;
        break;
      case 5:
        result=num1%num2;
      default:
        System.out.println("Invalid Option");
        break;
    }
    return result;
  }
}
