package org.prateek.PaymentServiceDb.Basics;

public class UPI implements PaymentMethod {
    String upiId;
    String userName;

    public UPI(String upiId, String userName) {
        this.upiId = upiId;
        this.userName = userName;
    }

    public void pay() {
        System.out.println("Making payment via UPI" + upiId);
    }
}
