package Transport;

abstract class Vehicle implements Transport {
    public String VehicleID;
    public String type;

    public Vehicle(String VehicleID, String type) {
        this.VehicleID = VehicleID;
        this.type = type;
    }

    abstract double CalcFare(int dist);

    @Override
    public void BookTicket(String source, String dest, int dist) {
        double fare = CalcFare(dist);
        if (this instanceof Discountable) {
            fare = ((Discountable) this).ApplyDiscount(fare);
        }
        System.out.println("Source: " + source);
        System.out.println("Destination: " + dest);
        System.out.println("Fare: " + fare);
    }
}