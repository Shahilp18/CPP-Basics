#include<iostream>
#include<vector>
using namespace std;

class Cricket{
public:
    int rank;
    string teamName;
    string player;
    vector<string> iccEvents;

    void display(){
        cout<<"Rank : "<<rank<<endl;
        cout<<"Team Name : "<<teamName<<endl;
        cout<<"Player : "<<player<<endl;
        for(string Indian : iccEvents){
            cout<<Indian<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Cricket c;
    c.rank = 01;
    c.teamName = "India";
    c.player = "KL Rahul";
    c.iccEvents = {"World Cup", "Asia Cup", "Ashes"};

    c.display();
}