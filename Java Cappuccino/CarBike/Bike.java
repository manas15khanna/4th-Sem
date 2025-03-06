package CarBike;

public class Bike extends Vehicle {
    boolean helmet;
    Bike(String fueltype, boolean helmet){
        super(fueltype);
        this.helmet=helmet;
    }
    public void DisplayBikeInfo(){
        System.out.println("Bike Fueltype: " + fueltype);
        System.out.println("Helmet Required: " + helmet);
    }
}
