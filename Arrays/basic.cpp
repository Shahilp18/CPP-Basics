#include<iostream>
using namespace std;

int main(){
    int matchScore[5] = {99,65,32,11,0};

    cout<<"Match Score : \n";
    for(int i = 0; i <5; i++){
        cout<< matchScore[i]<<" runs"<<endl;
    }
}