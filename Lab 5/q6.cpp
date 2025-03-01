#include<iostream>
using namespace std;

class LoanHelper {
    float interestRate;
public:
    LoanHelper(float rate) {
        if (rate < 0 || rate > 0.5) {
            cout << "Invalid rate (as rate < 0 || rate> 0.5)" << endl;
            cout<<"Now the Interest rate is set default to 0.5%"<<endl;
            interestRate = 0.005;
        } else {
            interestRate = rate / 100;
        }
    }

    void calculateMonthlyPayment(int loanAmount, int months) {
        if (months <= 0) {
            cout << "Invalid months" << endl;
            return;
        }
        float monthlyPayment = (loanAmount / months) + (loanAmount * interestRate);
        cout << "You have to Pay Rs." << monthlyPayment << " monthly for " << months << " months." << endl;
    }
};

int main() {
    float rate;
    int amount, months;

    cout << "Enter interest rate (0 to 0.5%): ";
    cin >> rate;

    LoanHelper loan(rate);

    cout << "Enter loan amount: ";
    cin >> amount;

    cout << "Enter number of months: ";
    cin >> months;

    loan.calculateMonthlyPayment(amount, months);

    return 0;
}