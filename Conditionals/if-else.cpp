//! Challenge: Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.

#include<iostream>
using namespace std;

int main(){
    int hour;

    cout<<"Enter current hour (0-23): ";
    cin>>hour;

    if(hour >= 8 && hour <=18){
        cout<<"Shop is open!";
    }else{
        cout<<"Shop is closed";
    }

}

