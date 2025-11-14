package org.prateek.PaymentServiceDb.Basics;

public class CreditCard extends Card implements PaymentMethod {
    public CreditCard(String cardNo, String name) {
        super(cardNo, name);
    }

    public void pay() {
        System.out.println("Making payment via Credit Card");
    }
}
