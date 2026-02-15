//! Challenge: Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.


//! && and || operators

#include<iostream>
using namespace std;

int main(){
    int cups, discount;
    string occupation;

    cout<<"Are you a Student (Y/N) : ";
    cin>>occupation;

    cout<<"Enter your tea cups quantity : ";
    cin>>cups;

    if(occupation == "Y" || occupation == "y" || cups > 15){
        cout<<"Eligible for discount!"<<endl;
    } else{
        cout<<"No discount for you :("<<endl;
    }
}