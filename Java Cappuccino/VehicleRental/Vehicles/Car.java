package VehicleRental.Vehicles;

public class Car extends Vehicle{
  private int numberOfDoors;
  
  public Car(String brand, int numberOfDoors){
    super(brand);
    this.numberOfDoors=numberOfDoors;
  }
  public void display(){
    System.out.println(brand + "Car with " + numberOfDoors + "Doors");
  }
}
