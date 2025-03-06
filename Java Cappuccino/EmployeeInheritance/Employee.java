//Subclass 
public class Employee {
  String name;
  double salary;

  Employee(String name, double salary){
    this.name=name;
    this.salary=salary;
  }
  void showDetails(){
    System.out.println("Employee: " + name + " Salary: " + salary);
  }
}
