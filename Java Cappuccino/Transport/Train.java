package Transport;

public class Train extends Vehicle implements Discountable {
    public Train(String VehicleID, String type) {
        super(VehicleID, type);
    }

    @Override
    public double CalcFare(int dist) {
        double fare = dist * 2;
        if (dist > 100) fare -= fare / 10;
        return fare;
    }

    @Override
    public double ApplyDiscount(double fare) {
        return fare / 10;  // 10% discount
    }

    @Override
    public void BookTicket(String source, String dest, int dist) {
        double fare = CalcFare(dist);
        if (dist > 100) {
            System.out.println("Discountable: Yes");
        } else {
            System.out.println("Discountable: No");
        }
        System.out.println("Source: " + source);
        System.out.println("Destination: " + dest);
        System.out.println("Fare: " + fare);
    }
}
