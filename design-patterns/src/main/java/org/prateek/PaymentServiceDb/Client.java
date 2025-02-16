package org.prateek.PaymentServiceDb;

import org.prateek.PaymentServiceDb.Basics.CreditCard;
import org.prateek.PaymentServiceDb.Basics.DebitCard;
import org.prateek.PaymentServiceDb.Basics.PaymentService;
import org.prateek.PaymentServiceDb.Basics.UPI;

public class Client {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        PaymentService ps = PaymentService.getInstance();

        ps.addPaymentMethod("sandeepCreditCardId", new CreditCard("1234", "Sandeep"));
        ps.addPaymentMethod("JohnCredit", new CreditCard("1234-5678-9876", "John"));
        ps.addPaymentMethod("JohnUPI", new UPI("john@upi", "John"));
        ps.makePayment("JohnCredit");

        ps.makePayment("sandeepCreditCardId");
        ps.addPaymentMethod("sgDebitCardId", new DebitCard("5678", "Sandeep"));
        ps.makePayment("sgDebitCardId");
        ps.addPaymentMethod("SgUPIID", new UPI("sg@okhdfcbank", "Sandeep"));
        ps.makePayment("SgUPIID");

    }
}

