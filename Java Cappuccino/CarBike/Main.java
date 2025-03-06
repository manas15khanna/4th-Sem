package CarBike;

public class Main {
    public static void main(String[] args) {
        Bike b = new Bike("Electric", false);
        Car c = new Car("Petrol", 5, false);
            b.DisplayBikeInfo();
            c.Display();
    }
}
