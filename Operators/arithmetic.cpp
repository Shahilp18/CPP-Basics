//!Challenge: Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.

//! +, -, *, /, %

#include<iostream>
using namespace std;

int main(){
    int totalCups, discountedPrice;
    float totalPrice, price;

    cout<<"Enter Cups quantity : ";
    cin>>totalCups;

    cout<<"Enter  Price : ";
    cin>>price;
    cout<<"-------------------------------------";

    totalPrice = price * totalCups;

    if(totalPrice > 100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout<<"\nDiscounted Price : "<<discountedPrice<<endl;
    } else{
        cout<<"Total Price : "<<totalPrice<<endl; 
    }

}