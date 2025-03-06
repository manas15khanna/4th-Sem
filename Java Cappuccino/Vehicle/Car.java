package Vehicle;

public class Car extends Vehicle{
    int seats;
    String CarType;
    Car(String fueltype, int seats, String CarType){
        super(fueltype);
        this.seats=seats;
        this.CarType=CarType;
    }
    public void display(){
        System.out.println("Car Type: " + CarType);
        System.out.println("Fuel Type: " + fueltype);
        System.out.println("Seats: " + seats);
    }
}
