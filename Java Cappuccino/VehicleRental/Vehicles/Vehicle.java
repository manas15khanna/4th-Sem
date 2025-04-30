package VehicleRental.Vehicles;

public class Vehicle{
  protected String brand;
  
  public Vehicle(String brand){
    this.brand=brand;
  }
  public void start(){
    System.out.println(brand + " is starting...");
  }
  public void stop(){
    System.out.println(brand + " is stopping...");
  }
}

