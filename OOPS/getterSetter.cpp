#include<iostream>
#include<vector>
using namespace std;

class UIC{
    private:
        int rNo;
        string name;
        vector<string> majors;
    public:
        UIC(){
            rNo = 01;
            name = "Anonymous";
            majors = {"Data Science", "Python"};
        }
        UIC(int r, string n, vector<string> m){
            rNo = r;
            name = n;
            majors = m;
        }

        //getter for rno
        int getRNo(){
            return rNo;
        }
        //setter for rno
        void setRno(int r){
            rNo = r;
        }

        //getter for name
        string getName(){
            return name;
        }
        //setter for name
        void setName(string n){
            name = n;
        }

        //getter of vector
        vector<string> getMajor(){
            return majors;
        }
        // setter for vector
        void setMajor(vector<string> m){
            majors = m;
        }

        void display(){
            cout<<"rNo : "<<rNo<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Majors : ";
            for(string m : majors){
                cout<<m<<" ";
            }
            cout<<endl;
        }
};

int main(){
    UIC u;
    u.display();

    cout<<"-------------------------------\n";
    u.setName("Shahil Patel");
    vector<string> newMajors = {"Computer Science", "Finance"};
    u.setMajor(newMajors);
    u.display();
}