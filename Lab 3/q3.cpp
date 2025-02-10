


#include <iostream>
#include <string>

using namespace std;

class Waterbottle{
float MLcapacity;
float Lcapacity;

public:
string company;
string color;

void setter(float ml,float l){
MLcapacity=ml;
Lcapacity=l;
}

void getter(){
cout<<"Initially the capacity in Mili letre is: "<<MLcapacity<<endl;
cout<<"Initially the capacity in Letre is: "<<Lcapacity<<endl;
}

void update(float x){
MLcapacity=MLcapacity-x;
Lcapacity=Lcapacity-(x/1000);

cout<<"Amount in Mili letre left is: "<<MLcapacity<<endl;
cout<<"Amount in letre left is: "<<Lcapacity<<endl;
}
};

int main() {
    float drink;
   
    cout<<"How much water you have drank? (Mili litre): ";
    cin>>drink;

Waterbottle w1;
Waterbottle w2;

w1.setter(5000,5);
w1.getter();

w1.update(drink);


w1.setter(10000,10);
w1.getter();

w1.update(drink);





    return 0;
}
