//! Challenge: A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount

//* Between 10 and 20 cups: 10% discount
//* Less than 10 cups: No discount

#include<iostream>
using namespace std;

int main(){
    int teaCups, pricePerCup = 20;
    float totalPrice, discount = 0;

    cout<<"Enter no of tea cups ordered : ";
    cin>>teaCups;

    totalPrice = teaCups * pricePerCup;

    if(teaCups > 20){
        discount = 0.20;
    }
    else if(teaCups >= 10 && teaCups <= 20){
        discount = 0.10;
    }
    else{
        discount = 0;
    }

    float discountAmount = totalPrice * discount;
    float finalPrice = totalPrice - discountAmount;

    cout<<"Total Price before discount: "<<totalPrice<<endl;
    cout<<"Discount Applied: "<<discountAmount<<endl;
    cout<<"Final Price: "<<finalPrice<<endl;

    return 0;
}
