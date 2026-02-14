//! Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.

#include<iostream>
using namespace std;

int main(){
    float basePrice = 0;
    float increasedPrice = 0;
    int roundedPrice = 0;

    cout<<"Enter base Price : ";
    cin>>basePrice;

    increasedPrice = basePrice * 1.10;

    roundedPrice = int(increasedPrice);

    cout<<"-----------------------------\n";
    
    cout<<"Base Price : "<<basePrice<<endl;
    cout<<"Increased Price : "<<increasedPrice<<endl;
    cout<<"Rounded Price : "<<roundedPrice<<endl;
}