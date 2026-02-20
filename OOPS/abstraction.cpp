#include <iostream>
#include <string>

using namespace std;

class WorldCup {
    public:
        virtual void prepareTeams() = 0; // pure virtual function
        virtual void captain() = 0; // pure virtual function
        virtual void coach() = 0; // pure virtual function

        void makeTeam(){
            prepareTeams();
            captain();
            coach();
        }
};

//derived class

class India : public WorldCup{ 
public:
    void prepareTeams() override {
        cout << "Indian Team is ready.." << endl;
    }

    void captain() override {
        cout << "KL Rahul is leading the team.." << endl;
    }
    void coach() override {
        cout << "Gautam Gambhir is appointed as Head Coach.." << endl;
    }
};
class Australia : public WorldCup{ 
    public:
    void prepareTeams() override {
        cout<<"---------------------------------------\n";
        cout << "Australian Team is ready.." << endl;
    }

    void captain() override {
        cout << "Mitchel Marsh is leading the team.." << endl;
    }
    void coach() override {
        cout << "Ricky Pointing is appointed as Head Coach.." << endl;
    }
};

int main(){

    India india;
    Australia australia;

    india.makeTeam();
    australia.makeTeam();

    return 0;
}