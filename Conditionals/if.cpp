//! Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.

#include<iostream>
using namespace std;

int main(){
    string order;

    cout<<"Enter your order : ";
    getline(cin, order);

    if(order == "Green Tea" || order == "green tea"){
        cout<<"Your order is confirmed!";
    }
}