#include<iostream>
using namespace std;

class Cricket{
    public:
        string player;
        int jerseyNo;
        vector<string> teams;

    //! DEFAULT CONSTRUCTOR    
    Cricket(){
        player = "KL Rahul";
        jerseyNo = 1;
        teams = {"India, Delhi Capitals"};
        cout<<"Default Constructer Called..."<<endl;
    }

    void display(){
        cout<< "Player name : "<<player<<endl;
        cout<< "Jersey Number : "<<jerseyNo<<endl;
        cout<< "Teams : ";
        for(string team : teams){
            cout<<team<<" "<<endl;
        }
    }
};

int main(){
    Cricket c;

    c.display();
}