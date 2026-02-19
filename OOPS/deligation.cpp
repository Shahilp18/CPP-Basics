#include <iostream>
#include <vector>

using namespace std;

class Cricket {
    public:
        string playerName;
        int matches;
        vector<string> skills;

        // Delegating Constructor
        Cricket(string name) : Cricket(name, 1, {"Batting"}) {}

        // Main Constructor
        Cricket(string name, int m, vector<string> s){
            playerName = name;
            matches = m;
            skills = s;

            cout << "Main Constructor called!" << endl;
        }

        void displayPlayerDetails(){
            cout << "Player Name: " << playerName << endl;
            cout << "Matches Played: " << matches << endl;
            cout << "Skills: ";
            for(string skill : skills){
                cout << skill << " ";
            }
            cout << endl;
        }
};

int main(){
    Cricket quickPlayer("KL Rahul");
    quickPlayer.displayPlayerDetails();

    return 0;
}
