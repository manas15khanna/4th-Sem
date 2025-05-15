// Custom Exception
class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String message) {
        super(message);
    }
}

// Abstract Class
abstract class PaymentMethod {
    protected double balance;

    public PaymentMethod(double balance) {
        this.balance = balance;
    }

    public abstract void pay(double amount) throws InsufficientFundsException;
}

// Derived Class: CreditCard
class CreditCard extends PaymentMethod {
    public CreditCard(double balance) {
        super(balance);
    }

    @Override
    public void pay(double amount) throws InsufficientFundsException {
        if (amount > balance) {
            throw new InsufficientFundsException("CreditCard: Not enough balance to complete the payment.");
        }
        balance -= amount;
        System.out.println("CreditCard payment of " + amount + " successful. Remaining balance: " + balance);
    }
}

// Derived Class: PayPal
class PayPal extends PaymentMethod {
    public PayPal(double balance) {
        super(balance);
    }

    @Override
    public void pay(double amount) throws InsufficientFundsException {
        if (amount > balance) {
            throw new InsufficientFundsException("PayPal: Not enough balance to complete the payment.");
        }
        balance -= amount;
        System.out.println("PayPal payment of " + amount + " successful. Remaining balance: " + balance);
    }
}

// Derived Class: BankTransfer
class BankTransfer extends PaymentMethod {
    public BankTransfer(double balance) {
        super(balance);
    }

    @Override
    public void pay(double amount) throws InsufficientFundsException {
        if (amount > balance) {
            throw new InsufficientFundsException("BankTransfer: Not enough balance to complete the payment.");
        }
        balance -= amount;
        System.out.println("BankTransfer payment of " + amount + " successful. Remaining balance: " + balance);
    }
}

// Main class must be public and match the file name
public class PaymentException {
    public static void main(String[] args) {
        PaymentMethod card = new CreditCard(1000);
        PaymentMethod paypal = new PayPal(500);
        PaymentMethod bank = new BankTransfer(2000);

        try {
            card.pay(300);        // OK
            paypal.pay(600);      // Exception
        } catch (InsufficientFundsException e) {
            System.out.println("Exception: " + e.getMessage());
        }

        try {
            bank.pay(1500);       // OK
        } catch (InsufficientFundsException e) {
            System.out.println("Exception: " + e.getMessage());
        }
    }
}

