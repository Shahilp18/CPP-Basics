//! Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.


#include<iostream>
using namespace std;

int main(){
    string favTea;
    int totalCups;

    cout<<"Enter your favourite Tea : ";
    getline(cin, favTea);

    cout<<"Enter number of Cups : ";
    cin>>totalCups;

    cout<<"-----------------------------\n";

    cout<<"Great! You want "<<totalCups<<" cups of "<<favTea<<"!\n";
}
