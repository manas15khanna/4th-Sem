package CarBike;

public class Car extends Vehicle {
    int seats;
    boolean ac;
    Car(String fueltype, int seats, boolean ac){
        super(fueltype);
        this.ac=ac;
        this.seats=seats;
    }
    public void Display(){
        System.out.println("AC: " + ac);
        System.out.println("Fuel Type: " + fueltype);
        System.out.println("Seats: " + seats);
    }
}
