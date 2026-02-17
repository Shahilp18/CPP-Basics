//! Challenge: Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.

#include<iostream>
using namespace std;

int main(){
    string choice;

    do{
        cout<<"Do you want more tea(yes/no) : ";
        getline(cin, choice);
    } while (choice != "no" && choice != "No");

    cout<<"Okay, no more tea!\n";
}