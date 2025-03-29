#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    float accountNumber;
    string accountHolderName;
    float accountBalance;

    BankAccount(float accNum, string accHolderName, float balance) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        accountBalance = balance;
    }

    void depositFunds(float amount) {
        accountBalance += amount;
        cout << "Updated balance: " << accountBalance << endl;
    }

    virtual void withdrawFunds(float amount) {
        if (amount > accountBalance) {
            cout << "Insufficient balance." << endl;
        } else {
            accountBalance -= amount;
            cout << "Updated balance: " << accountBalance << endl;
        }
    }

    virtual void calculateAccountInterest(float interestRate) {
        cout << "Interest calculation depends on account type." << endl;
    }

    virtual void generateStatement() {
        cout << "Transaction statement for account: " << accountNumber << endl;
    }

    void showAccountDetails() {
        cout << "Account number: " << accountNumber << endl;
        cout << "Account holder name: " << accountHolderName << endl;
        cout << "Account balance: " << accountBalance << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    float interestRate;
    float minimumBalance;

    SavingsAccount(float accNum, string accHolderName, float balance, float rate, float minBal)
        : BankAccount(accNum, accHolderName, balance) {
        interestRate = rate;
        minimumBalance = minBal;
    }

    void calculateAccountInterest(float rate) override {
        float calculatedInterest;
        calculatedInterest = (accountBalance * rate) / 100;
        cout << "Interest on balance: " << calculatedInterest << endl;
    }

    void withdrawFunds(float amount) override {
        if (amount > accountBalance) {
            cout << "Insufficient balance." << endl;
        } else {
            accountBalance -= amount;
            cout << "Updated balance: " << accountBalance << endl;
        }
    }

    void generateStatement() override {
        cout << "Savings Account Statement for: " << accountHolderName << endl;
    }
};

class CheckingAccount : public BankAccount {
public:
    float overdraftLimit;

    CheckingAccount(float accNum, string accHolderName, float balance, float overdraft)
        : BankAccount(accNum, accHolderName, balance), overdraftLimit(overdraft) {}

    void withdrawFunds(float amount) override {
        if (accountBalance - amount < -overdraftLimit) {
            cout << "Overdraft limit exceeded! Withdrawal denied." << endl;
        } else {
            accountBalance -= amount;
            cout << "Withdrawal successful! Updated balance: " << accountBalance << endl;
        }
    }

    void generateStatement() override {
        cout << "Checking Account Statement for: " << accountHolderName << endl;
    }
};

class FixedDepositAccount : public BankAccount {
public:
    float maturityDate;
    float fixedInterestRate;

    FixedDepositAccount(float accNum, string accHolderName, float balance, float maturity, float rate)
        : BankAccount(accNum, accHolderName, balance) {
        maturityDate = maturity;
        fixedInterestRate = rate;
    }

    void calculateAccountInterest(float rate) override {
        float calculatedInterest;
        calculatedInterest = (accountBalance * fixedInterestRate) / 100;
        cout << "Interest on balance: " << calculatedInterest << endl;
    }

    void generateStatement() override {
        cout << "Fixed Deposit Account Statement for: " << accountHolderName << endl;
    }
};

int main() {
    SavingsAccount savingAcc(1, "Asad", 6500, 7.5, 4000);
    savingAcc.depositFunds(600);
    savingAcc.withdrawFunds(3500);
    savingAcc.calculateAccountInterest(7.5);
    savingAcc.showAccountDetails();
    savingAcc.generateStatement();

    cout << "----------------------\n";

    CheckingAccount checkingAcc(2, "Yahya", 9800, 450);
    checkingAcc.depositFunds(567);
    checkingAcc.withdrawFunds(312);
    checkingAcc.showAccountDetails();
    checkingAcc.generateStatement();

    cout << "----------------------\n";

    FixedDepositAccount fixedDepAcc(3, "Umair", 313000, 222, 3.5);
    fixedDepAcc.depositFunds(12550);
    fixedDepAcc.calculateAccountInterest(3.5);
    fixedDepAcc.showAccountDetails();
    fixedDepAcc.generateStatement();

    return 0;
}
