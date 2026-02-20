#include<iostream>
using namespace std;

class Cricket{
    public:
        string player;
        int jerseyNo;
        vector<string> teams;

    //! PARAMETERISED CONSTRUCTOR    
    Cricket(string p, int jNo, vector<string> te){
        player = p;
        jerseyNo = jNo;
        teams = te;
        cout<<"Parameter Constructer Called..."<<endl;
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
    Cricket c("Virat Kohli", 18, {"India", "RCB"});

    c.display();
}