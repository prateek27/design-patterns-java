#include "Invoice.cpp"
#include "EmailService.cpp"
#include "InvoiceRepository.cpp"

int main() {
    // Create an invoice
    Invoice invoice(100.0);
    
    // Generate the invoice
    invoice.generateInvoice();
    
    // Save to database using repository
    InvoiceRepository repository;
    repository.saveToDatabase();
    
    // Send email notification
    EmailService emailService;
    emailService.sendEmailNotification();
    
    return 0;
} 