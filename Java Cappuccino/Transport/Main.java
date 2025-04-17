package Transport;

public class Main {
    public static void main(String[] args) {
        Vehicle[] v = new Vehicle[3];
        v[0] = new Bus("PB 65 AB 1234", "CTU");
        v[1] = new Train("12345", "Vande Bharat");
        v[2] = new Taxi("CH01 CE 0001", "Range Rover");
    for(
    Vehicle x :v)

    {
        x.BookTicket("Chandigarh", "Kasauli", 66);
    }
    }
}
