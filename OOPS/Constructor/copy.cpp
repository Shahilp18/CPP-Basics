#include<iostream>
#include<vector>
using namespace std;

class Cricket{
    public:
        string* player;
        int jerseyNo;
        vector<string> teams;

    //! PARAMETERISED CONSTRUCTOR    
    Cricket(string p, int jNo, vector<string> te){
        player = new string(p);
        jerseyNo = jNo;
        teams = te;
        cout<<"Parameter Constructer Called..."<<endl;
    }

    //! COPY CONSTRUCTOR
    Cricket(Cricket &c){
        player = new string(*c.player);
        jerseyNo = c.jerseyNo;
        teams = c.teams;
        cout<<"Copy Constructor Called..."<<endl;
    }

    ~Cricket(){
        delete player;
        cout << "Destructor Called..." << endl;
    }

    void display(){
        cout<< "Player name : "<<*player<<endl;
        cout<< "Jersey Number : "<<jerseyNo<<endl;
        cout<< "Teams : ";
        for(string team : teams){
            cout<<team<<" "<<endl;
        } 
    }
};

int main(){
    Cricket c1("Virat Kohli", 18, {"India", "RCB"});

    c1.display();

    Cricket c2(c1);
    c2.display();
}