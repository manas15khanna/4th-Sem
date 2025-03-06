package ElectricCar;

public class Main {
    public static void main(String[] args) {
        Car c = new Car("Petrol", 5, false);
        ElectricCar e = new ElectricCar(5, false, 5000, 5000);
        c.Display();
        e.Display();
    }
}
