package VehicleRental;

import VehicleRental.Vehicles.Bike;
import VehicleRental.Vehicles.Car;

public class MainApp{
  public static void main(String[] args) {
    Car c = new Car("Toyota", 4);
    Bike b = new Bike("Honda", true);

    c.start();
    c.display();
    c.stop();

    b.start();
    b.display();
    b.stop();
  }
}
