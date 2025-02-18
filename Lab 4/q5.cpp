#include <iostream>
#include <string>

using namespace std;

class FootballPlayer {
private:
    string name;
    string position;
    int goals;

public:
    
    FootballPlayer() {
        name = "Unknown Player";
        position = "Bench Warmer";
        goals = 0;
        
        cout<<"Default Player: "<< endl;
        cout << "\nPlayer name is: " << name << endl;
        cout << "\nHis position is: " << position << endl;
        cout << "\nHis goals are: " << goals << endl;
    }

   
    FootballPlayer(string name, string position, int goals) {
        this->name = name;
    	this->position = position;
    	this->goals = goals;
        
        cout<<"Parameterized Player: "<<endl;
        cout << "\nPlayer name is: " << name << endl;
        cout << "\nHis position is: " << position << endl;
        cout << "\nHis goals are: " << goals << endl;
    }
    
     FootballPlayer(string name){
        this->name = name;
    	this->position = "Mid Fielder";
    	this->goals = 10;
    	
    	cout<<"Default Argument Player: "<<endl;
    	cout << "\nPlayer name is: " << name << endl;
        cout << "\nHis position is: " << position << endl;
        cout << "\nHis goals are: " << goals << endl;
     }

    
     FootballPlayer(FootballPlayer& p) {
         this->name = p.name;
         this->position = p.position;
         this->goals = p.goals;
        
        cout<<"Cloned Player: "<<endl;
        cout << "\nPlayer name is: " << name << endl;
        cout << "\nHis position is: " << position << endl;
        cout << "\nHis goals are: " << goals  << endl;
    }
    
    void boostGoals(int goals) {
        this->goals += goals;
        cout <<"\n"<< name << " has scored " << goals << " more goals! Total goals are now increased to: " << this->goals <<"\nHe is now having a Ballon Dor Worthy Season!!" <<endl;
    }
};

int main() {
    
    FootballPlayer p1; 
     cout << "-----------------------------" << endl;
    FootballPlayer p2("Leroy Sane", "Right Wing",128 );
     cout << "-----------------------------" << endl;
    p2.boostGoals(25);
     cout << "-----------------------------" << endl;
    
    FootballPlayer p3("Lewandowski");
     cout << "-----------------------------" << endl;
    
    FootballPlayer p4(p2);  
    cout << "-----------------------------" << endl;
    
    return 0;
}
