#include <iostream>
#include <string>
using namespace std;

class DayOfYear {
private:
    int day; 

public:
    static const string months[12];
    static const int daysInMonth[12];

   
    DayOfYear(int thatDay) {
        if (thatDay >= 1 && thatDay <= 365) {
            day = thatDay;
        } else {
            cout << "Day is Not Correct!!" << endl;
            day = -1; 
        }
    }

    
    void print() const {
        if (day == -1) {
            return;  
        }

        int month = 0;
        int remainingDays = day;

        
        while (remainingDays > daysInMonth[month]) {
            remainingDays = remainingDays - daysInMonth[month];
            month++;
        }

        
        cout << months[month] << " " << remainingDays << endl;
    }
};

const string DayOfYear::months[12] = {"January", "February", "March", "April", "May", "June", 
                                       "July", "August", "September", "October", "November", "December"};
const int DayOfYear::daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int n;

    
    cout << "How many days would you like to enter? ";
    cin >> n; 

    
    for (int i = 0; i < n; i++) {
        cout << "Enter the day (1-365): ";
        int day;
        cin >> day;

        
        DayOfYear date(day);
        date.print();
    }

    return 0;
}
