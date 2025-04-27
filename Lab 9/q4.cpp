#include <iostream>
#include <string>
using namespace std;

class PaymentMethod {
public:
    virtual bool processPayment(double amount) = 0;
    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod {
private:
    string cardNumber;

public:
    CreditCard(string cardNumber) {
        this->cardNumber=cardNumber;
    }

    bool processPayment(double amount) override {
        if (cardNumber.length() == 16) {
            cout << "Processing the payment of your credit Card = $" << amount << endl;
            return true;
        }
        return false;
    }
};

class DigitalWallet : public PaymentMethod {
private:
    double balance;

public:
    DigitalWallet(double balance){
        this->balance=balance;
    }

    bool processPayment(double amount) override {
        if (balance >= amount) {
            balance = balance-amount;
            cout << "Processing the payment of your Digital Wallet = $" << amount << endl <<"Now the Balance left = $"<<balance<<endl;
            return true;
        }
        return false;
    }
};

int main() {
    CreditCard card("1324567128123098");
    DigitalWallet wallet(500.0);

    double paymentAmount = 100.0;

    if (card.processPayment(paymentAmount)) {
        cout << "Payment via Credit Card Successful!" << endl;
    } else {
        cout << "Credit Card Payment Failed!" << endl;
    }

    if (wallet.processPayment(paymentAmount)) {
        cout << "Payment via Digital Wallet Successful!" << endl;
    } else {
        cout << "Digital Wallet Payment Failed!" << endl;
    }

    return 0;
}
