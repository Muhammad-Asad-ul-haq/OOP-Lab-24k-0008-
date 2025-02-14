#include <iostream>
#include <string>

using namespace std;

class weekdays {
private:
    string Days[7];
    int CurrentDay;

public:
   
    weekdays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0;  
    }
    
    
    weekdays(int currentDay) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        
        
        CurrentDay = currentDay % 7;
    }

  
    string getCurrentDay() {
        return Days[CurrentDay];
    }
    
    string getNextDay(){
    	return Days[(CurrentDay + 1) % 7];
	}

   
    string getPreviousDay() {
        int previousDay = (CurrentDay - 1 + 7) % 7; 
        return Days[previousDay];
    }

  
    string getNthDayFromToday(int N) {
        int futureDay = (CurrentDay + N) % 7;
        return Days[futureDay];
    }
};

int main() {
    int d;
    cout << "What is the Current Day? (Integer value like e.g. Sunday=0): ";
    cin >> d;
    
   
    weekdays w1(d);

   
    cout << "Current day is: " << w1.getCurrentDay() << endl;

    
    cout << "Previous day was: " << w1.getPreviousDay() << endl;
    
     cout << "Next day will be: " << w1.getNextDay() << endl;

  
    int n;
    cout << "Enter the number of days from today to see which day it will be: ";
    cin >> n;
    cout << "The day after "<<n<<" days will be: " << w1.getNthDayFromToday(n) << endl;

    return 0;
}
