#include<iostream>
using namespace std;

int totalScore(int score[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total+= score[i];
    }
    return total;
}

int main(){
    int playerScore[5] = {10,55,79,100,100};

    int total = totalScore(playerScore, 5);

    cout << "Total Score: " << total << endl;
    
}