#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Base Class
class Ahmedabad{
protected:
    string areaName;
    int pincode;

public:
    Ahmedabad(string an, int pc) : areaName(an), pincode(pc){
        cout << "Ahmedabad Constructor Called for " << areaName << endl;
    }

    virtual void cm() const {
        cout << "Ahmedabad city is governed by AMC." << endl;
    }

    virtual void info() const {
        cout << "Area: " << areaName << " | Pincode: " << pincode << endl;
    }

    virtual ~Ahmedabad(){
        cout << "Ahmedabad Destructor Called for " << areaName << endl;
    }
};


// Derived Class 1
class Navrangpura : public Ahmedabad{
public:
    Navrangpura() : Ahmedabad("Navrangpura", 380009){
        cout << "Navrangpura Constructor Called" << endl;
    }

    void cm() const override{
        cout << "Navrangpura is a prime area under AMC." << endl;
    }

    ~Navrangpura(){
        cout << "Navrangpura Destructor Called" << endl;
    }
};


// Derived Class 2
class Maninagar : public Ahmedabad{
public:
    Maninagar() : Ahmedabad("Maninagar", 380008){
        cout << "Maninagar Constructor Called" << endl;
    }

    void cm() const override{
        cout << "Maninagar is a residential and railway connected area." << endl;
    }

    ~Maninagar(){
        cout << "Maninagar Destructor Called" << endl;
    }
};


int main(){

    Ahmedabad* area1 = new Navrangpura();
    Ahmedabad* area2 = new Maninagar();

    area1->info();
    area1->cm();

    area2->info();
    area2->cm();

    delete area1;
    delete area2;

    return 0;
}