package org.prateek.PaymentServiceDb.Basics;

import java.sql.*;

public class PaymentService {
    private static PaymentService instance;
    private Connection connection;

    // Singleton Constructor
    private PaymentService() {
        try {
            this.connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdatabase", "root", "AdminSandeep");
            createTableIfNotExists();
        } catch (Exception e) {
            throw new RuntimeException("Database connection failed!", e);
        }
    }

    public static synchronized PaymentService getInstance() {
        if (instance == null) {
            instance = new PaymentService();
        }
        return instance;
    }

    // Ensures Table Exists
    private void createTableIfNotExists() {
        try (Statement stmt = connection.createStatement()) {
            String sql = "CREATE TABLE IF NOT EXISTS payment_methods (" +
                    "id INT AUTO_INCREMENT PRIMARY KEY, " +
                    "name VARCHAR(255) UNIQUE NOT NULL, " +
                    "type ENUM('CREDIT_CARD', 'DEBIT_CARD', 'UPI') NOT NULL, " +
                    "details TEXT NOT NULL)";
            stmt.executeUpdate(sql);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    // Add Payment Method with ENUM
    public void addPaymentMethod(String name, PaymentMethod pm) {
        try {
            PaymentType type;
            String details;

            if (pm instanceof CreditCard) {
                type = PaymentType.CREDIT_CARD;
                details = ((CreditCard) pm).cardNo;
            } else if (pm instanceof DebitCard) {
                type = PaymentType.DEBIT_CARD;
                details = ((DebitCard) pm).cardNo;
            } else if (pm instanceof UPI) {
                type = PaymentType.UPI;
                details = ((UPI) pm).upiId;
            } else {
                throw new IllegalArgumentException("Unknown Payment Method");
            }

            PreparedStatement stmt = connection.prepareStatement(
                    "INSERT INTO payment_methods (name, type, details) VALUES (?, ?, ?) " +
                            "ON DUPLICATE KEY UPDATE type=VALUES(type), details=VALUES(details)");

            stmt.setString(1, name);
            stmt.setString(2, type.name()); // Store ENUM as String
            stmt.setString(3, details);
            stmt.executeUpdate();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    // Retrieve and Make Payment
    public void makePayment(String name) {
        try {
            PreparedStatement stmt = connection.prepareStatement(
                    "SELECT type, details FROM payment_methods WHERE name = ?");
            stmt.setString(1, name);
            ResultSet rs = stmt.executeQuery();

            if (rs.next()) {
                PaymentType type = PaymentType.valueOf(rs.getString("type")); // Convert DB String to Enum
                String details = rs.getString("details");

                PaymentMethod pm;
                switch (type) {
                    case CREDIT_CARD:
                        pm = new CreditCard(details, name);
                        break;
                    case DEBIT_CARD:
                        pm = new DebitCard(details, name);
                        break;
                    case UPI:
                        pm = new UPI(details, name);
                        break;
                    default:
                        throw new IllegalArgumentException("Unknown Payment Type");
                }

                pm.pay();
            } else {
                throw new IllegalArgumentException("Payment method not found: " + name);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
