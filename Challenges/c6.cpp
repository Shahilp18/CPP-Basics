//! Write a program that uses bitwise AND (&) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.

#include<iostream>
using namespace std;

int main(){
    int stock;
    int choice;

    cout<<"Enter stock value (1=Green, 2=Black, 4=Oolong, combine by adding): ";
    cin>>stock;

    cout<<"Enter tea type to check (1=Green, 2=Black, 4=Oolong): ";
    cin>>choice;

    if(stock & choice){
        cout<<"Tea is in stock."<<endl;
    } else {
        cout<<"Tea is NOT in stock."<<endl;
    }

    return 0;
}
