package Addition;

class Complex {
    private int real;
    private int imaginary;
    // Constructor
    public Complex(int real, int imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }
    // Method to add two complex numbers
    public Complex add(Complex other) {
        int newReal = this.real + other.real;
        int newImaginary = this.imaginary + other.imaginary;
        return new Complex(newReal, newImaginary);
    }
    // Method to display the complex number
    public void display() {
        if (imaginary >= 0)
            System.out.println(real + " + " + imaginary + "i");
        else
            System.out.println(real + " - " + Math.abs(imaginary) + "i");
    }
    public static void main(String[] args) {
        Complex c1 = new Complex(4, 5);
        Complex c2 = new Complex(3, -2);

        System.out.print("First Complex Number: ");
        c1.display();

        System.out.print("Second Complex Number: ");
        c2.display();

        Complex sum = c1.add(c2);
        System.out.print("Sum: ");
        sum.display();
    }
}
