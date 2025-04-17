package Transport;

public class Taxi extends Vehicle {
    public Taxi(String VehicleID, String type) {
        super(VehicleID, type);
    }

    @Override
    public double CalcFare(int dist) {
        double fare = dist * 2;
        if (dist > 100) fare -= fare / 10;  // 10% discount for long distance
        return fare;
    }

    @Override
    public void BookTicket(String source, String dest, int dist) {
        double fare = CalcFare(dist);
        System.out.println("Source: " + source);
        System.out.println("Destination: " + dest);
        System.out.println("Fare: " + fare);
    }
}