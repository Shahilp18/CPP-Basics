//! Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

#include<iostream>
using namespace std;

int main(){
    int teapacks;
    float price, total;
    float finalPrice;

    cout<<"Enter number of tea packs : ";
    cin>>teapacks;

    cout<<"Enter price per pack : ";
    cin>>price;


    total = teapacks * price;
    finalPrice = total * 1.10;



    cout<<"------------------------------------\n";
    cout<<"Final cost : "<<finalPrice<<endl;

}