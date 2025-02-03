
#include <iostream>
using namespace std;

struct product{
	string name;
	float price;
	int quantity;
};

void ProductAddition(product &p){
	cout<<"Add Product Name: ";
	cin>>p.name;
	
	cout<<"Add Product Price: ";
	cin>>p.price;
	
	cout<<"Add Product Quantity: ";
	cin>>p.quantity;
}

void ProductUpdate(product &p){
    cout<<"\nAdd New Product Name: ";
	cin>>p.name;
	
	cout<<"Add New Product Price: ";
	cin>>p.price;
	
	cout<<"Add New Product Quantity: ";
	cin>>p.quantity;
}

void ProductDelete(product &p) {
    p.name = "";     
    p.price = 0;    
    p.quantity = 0;  
    
    cout << "\nProduct deleted successfully." << endl;

}


int main() {
    product p;  
    ProductAddition(p); 
    
    cout << "\nProduct Added: " << endl;
    cout << "Name: " << p.name << endl;
    cout << "Price: " << p.price << endl;
    cout << "Quantity: " << p.quantity << endl;
    
    ProductUpdate(p);
     cout << "\nNew Product Added: " << endl;
    cout << "Name: " << p.name << endl;
    cout << "Price: " << p.price << endl;
    cout << "Quantity: " << p.quantity << endl;
    
     ProductDelete(p);
    
    cout << "\nProduct After Deletion: " << endl;
    cout << "Name: " << p.name << endl;
    cout << "Price: " << p.price << endl;
    cout << "Quantity: " << p.quantity << endl;
    
    return 0;
}

q2.cpp
Displaying q2.cpp.
Lab 02 (In-Lab Tasks)
Sameer Faisal
•
Jan 30 (Edited Jan 31)
Due Jan 31, 10:30 AM
Submit Q2 & Q3
Class comments
Your work
Turned in

q2.cpp
Text

q3.cpp
Text
Work cannot be turned in after the due date
Private comments
