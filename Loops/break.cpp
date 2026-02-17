//! Challenge: Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string choice;

    while (true){
        cout<<"Serving tea..\n";
        cout<<"Type 'stop' if you’ve had enough : ";
        getline(cin, choice);

        if(choice == "stop"){
            break;
        } 
    }
    cout << "No more tea will be served to you";

    return 0;
}