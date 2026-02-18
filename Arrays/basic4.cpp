#include<iostream>
using namespace std;

int main(){
    int totalScore[2][2] = {
        {99, 87},
        {102, 55}
    };

    for(int i = 0; i < 2; i++){
        cout<<"\nMatch "<< i + 1<<endl; 
        for(int j = 0; j < 2; j++){
            cout<< totalScore[i][j]<< " runs";
        }
    }
}