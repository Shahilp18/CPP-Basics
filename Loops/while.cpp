//! Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

#include<iostream>
using namespace std;

int main(){
    int teaCups;

    cout<<"Enter total TeaCups orderded : ";
    cin>>teaCups;

    while (teaCups > 0)
    {
        teaCups--;
        cout<<"1 cup served! Remaining cups : "<<teaCups<<endl;
    }
    cout<<"All tea cups served\n";
    
}