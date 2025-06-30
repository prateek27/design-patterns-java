package org.prateek.PaymentServiceDb.Basics;

public class DebitCard extends Card implements PaymentMethod {
    public DebitCard(String cardNo, String userName) {
        super(cardNo, userName);
    }

    @Override
    public void pay() {
        System.out.println("Making payment via Debit Card");
    }
}
