package CarBike;

public class Vehicle {
    String fueltype;
    int speed;
    public Vehicle(String fueltype){
        this.speed=0;
        this.fueltype=fueltype;
    }
    void StartEngine(){
        System.out.println("Engine Has Started!!");
    }
    void Accelerate(int increase){
        speed+=increase;
        System.out.println("Speed Increase: " + speed);
    }
}