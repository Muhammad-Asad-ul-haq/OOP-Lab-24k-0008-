#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFundsException : public runtime_error {
public:
    InsufficientFundsException() 
        : runtime_error("Insufficient funds to complete withdrawal!") {}
};

class BankAccount {
    double balance;
public:
    BankAccount(double initial) : balance(initial) {}
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }
    
    void showBalance() const {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account(500);
    
    account.showBalance();
    
    try {
        cout << "Enter withdrawal amount: $";
        double amount;
        cin >> amount;
        
        account.withdraw(amount);
        cout << "Withdrawal successful! ";
        account.showBalance();
    } 
    catch (const InsufficientFundsException& e) {
        cerr << "Error: " << e.what() << endl;
        account.showBalance();
    }

    return 0;
}
