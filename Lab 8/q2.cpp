#include <iostream>
using namespace std;


class BallsFaced;

class Runs {
private:
    int runsScored;

public:
  
    Runs(int runsScored) {
       this->runsScored = runsScored;
    }

    friend void calculateStrikeRate(Runs r, BallsFaced b);
};

class BallsFaced {
private:
    int ballsPlayed;

public:
    
    BallsFaced(int ballsPlayed) {
        this->ballsPlayed = ballsPlayed;
    }

    
    friend void calculateStrikeRate(Runs r, BallsFaced b);
};


void calculateStrikeRate(Runs r, BallsFaced b) {
    if (b.ballsPlayed == 0) {
        cout << "Balls can't be 0" << endl;
    } else {
        float strikeRate = (r.runsScored * 100.0) / b.ballsPlayed;
        cout << "Strike Rate = " << strikeRate << endl;
    }
}

int main() {
    
    Runs r1(85);          
    BallsFaced b1(60);    

    
    calculateStrikeRate(r1, b1);

    return 0;
}

