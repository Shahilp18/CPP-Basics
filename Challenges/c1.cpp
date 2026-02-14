//! Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.



#include<iostream>
using namespace std;

int main(){
    string type; //? Green Tea, Masala Tea, etc..
    float price;
    char rating; //? A, B, C, etc..

    cout<<"Enter type of Tea : ";
    cin>>type;

    cout<<"Enter price : ";
    cin>>price;

    cout<<"Enter rating : ";
    cin>>rating;

    cout<<"-----------------------------\n";
    cout<<"Type : "<<type<<endl<<"Price : "<<price<<endl<<"Rating : "<<rating<<endl;
}


