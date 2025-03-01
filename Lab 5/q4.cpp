#include <iostream>
#include <string>
using namespace std;


class Airport {
private:
    string name;        
    string location;    

public:
  
    Airport(string name, string location)  {
        this->name=name;
        this->location=location;
    }

 
    void display() {
        cout << "The Airport name is: " << name << " which is in: " << location << endl;
    }
};


class Flight {
private:
    string flightNumber; 
    string status;       
    Airport* route[3];   
    int airportCount;    

public:
    
    Flight(string flightNumber){
        this->flightNumber=flightNumber;
        this-> status="Scheduled";
        this->airportCount=0;
    }

 
    void addAirport(Airport* airport) {
        if (airportCount < 3) { 
            route[airportCount] = airport;
            airportCount++;
        } else {
            cout << "Cannot add more airports as the route is full!" << endl;
        }
    }

    
    void setStatus(string newStatus) {
        status = newStatus;
    }

    
    void display() {
        cout << "Flight: " << flightNumber << " -> Status: " << status << endl;
        cout << "Route:" << endl;
        for (int i = 0; i < airportCount; i++) {
            route[i]->display(); 
        }
    }
};

int main() {
    
    Airport karachi("Jinnah International", "Karachi");
    Airport islamabad("Islamabad International", "Islamabad");
    Airport london("Heathrow", "London");
    Airport newYork("JFK", "New York");
    
    Flight pk303("PK-303");

    
    pk303.addAirport(&karachi);
    pk303.addAirport(&islamabad);
    pk303.addAirport(&london);
    pk303.addAirport(&newYork);
   
    pk303.setStatus("Diverted to Islamabad");

    
    pk303.display();

    return 0;
}