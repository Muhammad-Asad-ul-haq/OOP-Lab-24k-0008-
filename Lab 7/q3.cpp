#include <iostream>
using namespace std;

class Currency {
protected:
    double amount;
    string currencyCode;
    char currencySymbol;
    double exchangeRate;

public:
    Currency(double a, string c, char s, double r) 
        : amount(a), currencyCode(c), currencySymbol(s), exchangeRate(r) {}

    virtual void convertToBase() const {
        double baseAmount = amount * exchangeRate;
        cout << "Base amount in USD: " << baseAmount << endl;  
    }

    void convertTo(const Currency& targetCurrency) const {
        double baseAmount = this->amount * exchangeRate;  
        double convertedAmount = baseAmount / targetCurrency.exchangeRate;
        cout << amount << " " << currencyCode << " is equivalent to " << convertedAmount << " " << targetCurrency.currencyCode << endl;
    }

    virtual void displayCurrency() const {
        cout << currencySymbol << amount << " (" << currencyCode << ")" << endl;
    }

    virtual ~Currency() {}
};

class Dollar : public Currency {
public:
    Dollar(double a) : Currency(a, "USD", '$', 1.0) {}

    void displayCurrency() const override {
        cout << "USD $" << amount << endl;
    }
};

class Euro : public Currency {
public:
    Euro(double a) : Currency(a, "EUR", '€', 1.10) {}

    void displayCurrency() const override {
        cout << "EUR €" << amount << endl;
    }
};

class Rupee : public Currency {
public:
    Rupee(double a) : Currency(a, "INR", '₹', 0.012) {}

    void displayCurrency() const override {
        cout << "INR ₹" << amount << endl;
    }
};

int main() {
    Dollar usd(54);
    Euro eur(3131);
    Rupee inr(1313);

    cout << "Original Currencies:\n";
    usd.displayCurrency();
    eur.displayCurrency();
    inr.displayCurrency();

    cout << "\nConversions:\n";
    usd.convertTo(eur); 
    usd.convertTo(inr);  
    eur.convertTo(usd);  
    inr.convertTo(usd);  

    return 0;
}
