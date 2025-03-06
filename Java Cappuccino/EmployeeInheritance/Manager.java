//Subclass Manager "is a"
class Manager extends Employee{
  String department;

  Manager(String name, double salary, String department){
    super(name, salary); //Calls the Constructor
    this.department=department;
  }
  @Override 
  void showDetails(){
    super.showDetails();
    System.out.println(" Department: " + department);
  }
}


