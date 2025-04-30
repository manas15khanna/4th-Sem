package VehicleRental.Vehicles;

public class Bike extends Vehicle{
  private boolean hasCarrier;
  
  public Bike(String brand, boolean numberOfDoors){
    super(brand);
    this.hasCarrier = hasCarrier;
  }
  public void display(){
    System.out.println(brand + "Bike with " + (hasCarrier ? "with" : "without") + "carrier");
  }
}

