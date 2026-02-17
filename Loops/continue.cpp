//! Challenge: Write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.


#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaList[5] = {"Black", "Green", "Oolong", "Masala", "Lemon"};

    for(int i = 0; i < 5; i++){
        if(teaList[i]=="Green"){
            cout<<"Skipping it..\n";
            continue;
        }
        cout << "Brewing " << teaList[i] << "..." << endl;

    }

    return 0;
}