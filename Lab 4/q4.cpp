#include <iostream>
#include <string>

using namespace std;

class CricketPlayer {
private:
    string name;
    int JerseyNumber;
    float BattingAverage;
    int matches;
    int runs;

public:
   
    CricketPlayer(string name, int JerseyNumber, float BattingAverage) {
        this->name = name;
    	this->JerseyNumber = JerseyNumber;
    	this->BattingAverage = BattingAverage;
    	this->matches = 47;
    	this->runs = 2500;
        
    }
    
    void improveAverage(int runs) {
        this->BattingAverage += runs;
    }
    
    void playMatch(int runsScored) {
    runs += runsScored; 
    matches++;         
    BattingAverage = runs / float(matches); 
}

void displayStats() {
        cout << "\nPlayer Name: " << name << endl;
        cout << "Jersey Number: " << JerseyNumber << endl;
        cout << "Batting Average: " << BattingAverage << endl;
        cout << "Total Matches Played: " << matches << endl;
        cout << "Total Runs: " << runs << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
    CricketPlayer p1("Babar Azam", 56, 78.5);
    CricketPlayer p2("Muhammad Rizwan", 16, 67.3);
    CricketPlayer p3("Saim Ayub", 98, 44.45);
    
    p1.improveAverage(113);
    p2.improveAverage(45);
    p3.improveAverage(77);
    
    p1.playMatch(113);
    p2.playMatch(45);
    p3.playMatch(77);
    
    cout<<"The Updated Player Stats are: "<<endl;
    p1.displayStats();
    p2.displayStats();
    p3.displayStats();
    
    return 0;
}
