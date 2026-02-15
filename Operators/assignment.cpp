//! Challenge: Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators.

//! +=, -=, *=, /=, %=

#include<iostream>
using namespace std;

int main(){
    int teaBags = 0, addBags = 0, finalBags = 0;

    cout<<"Enter your tea bags quantity : ";
    cin>>teaBags;

    if(teaBags < 10){
        addBags+=5;
        finalBags = teaBags + addBags;
        cout<<"Final Bags : "<<finalBags<<endl;
    }else{
        cout<<"Teabags : "<<teaBags<<endl;
    }
}