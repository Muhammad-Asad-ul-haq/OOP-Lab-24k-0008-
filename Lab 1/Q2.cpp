#include <iostream>
using namespace std;

int main() {
    int pf,oop,dld,ict;
    int total = 0;
    float average;

    cout << "Enter marks of PF: " ;
    cin >> pf;
    
    cout << "Enter marks of OOP: " ;
    cin >> oop;
    
    cout << "Enter marks of DLD: " ;
    cin >> dld;
    
    cout << "Enter marks of ICT: " ;
    cin >> ict;
    
    total=pf+oop+dld+ict;
    cout << "Total marks are: " << total << endl;
    
    average=total/4;
    cout << "Average is : " << average << endl;
    
    
    
  
    if (average>=90 && average<=100) {
        cout << "You have grade A" << endl;
        return 0;
       }
       
       if (average>=80 && average<=89) {
        cout << "You have grade B" << endl;
        return 0;
       }
       
       if (average>=70 && average<=79) {
        cout << "You have grade C" << endl;
        return 0;
       }
       
       if (average>=60 && average<=100) {
        cout << "You have grade D" << endl;
        return 0;
       }
       
       else{
           cout << "You have grade F" << endl;
       }
       
return 0;
}
