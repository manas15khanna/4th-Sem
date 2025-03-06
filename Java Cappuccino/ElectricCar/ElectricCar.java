package ElectricCar;

public class ElectricCar extends Car{
    int BatteryCapacity;
    int ChargeTime;
    ElectricCar(int seats, boolean ac, int BatteryCapacity, int ChargeTime){
        super("Electric",5, false);
        this.BatteryCapacity=BatteryCapacity;
        this.ChargeTime=ChargeTime;
    }
    public void Display(){
        System.out.println("Number of Seats: " + seats);
        System.out.println("Ac Present: " + ac);
        System.out.println("Battery Capacity: " + BatteryCapacity);
        System.out.println("Charge Time: " + ChargeTime);
    }
}
