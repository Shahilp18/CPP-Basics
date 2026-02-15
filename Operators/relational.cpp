//! Challenge: A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

//! , >=, <, <=


#include<iostream>
using namespace std;

int main(){
    int cups;
    string badge;

    cout<<"Enter your tea cups quantity : ";
    cin>>cups;

    if(cups > 20){
        badge = "Gold Badge";
        cout<<"You got "<<badge<<" in our loyalty program"<<endl;
    }else if(cups < 20 && cups > 10){
        badge = "Silver Badge";
        cout<<"You got "<<badge<<" in our loyalty program"<<endl;
    } else{
        cout<<"No badge for you"<<endl;
    }
}