#include<iostream>
using namespace std;

class Ahmedabad{
    private:
        string area;
        int population;

    public:
        // Ahmedabad(string a, int p){
        //     area = a;
        //     population = p;
        // }
        Ahmedabad(string a, int p): area(a), population(p){}

        friend bool compareArea(Ahmedabad &a1, Ahmedabad &a2);

        void display(){
            cout<<"Area : "<<area<<endl;
            cout<<"Population : "<<population<<endl;
        }
};

    bool compareArea(Ahmedabad &a1, Ahmedabad &a2){
        return a1.population > a2.population;
    }

int main(){
    Ahmedabad n("Navrangpura", 510000);
    Ahmedabad v("Vastrapur", 451000);
    n.display();
    v.display();

    if(compareArea(n, v)){
        cout<<"Navrangpura is more populated"<<endl;
    } else{
        cout<<"Vastrapur is more populated";
    }
}