//! Challenge: Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:* Green Tea: $2
//* Black Tea: $3
//* Oolong Tea: $4

#include<iostream>
using namespace std;

int main(){
    int choice;
    string price;

    cout<<"MENU = 1. Green Tea, 2.Black Tea, 3. Oolong Tea)\n";
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1: 
            price = "$2";
            cout<<"You selected Green Tea. Price :"<<price<<endl;
            break;
        case 2: 
            price = "$3";
            cout<<"You selected Black Tea. Price :"<<price<<endl;
            break;
        case 3: 
            price = "$4";
            cout<<"You selected Oolong Tea. Price :"<<price<<endl;
            break;
        default:
            cout<<"Invalid Choice!\n";
    }
}