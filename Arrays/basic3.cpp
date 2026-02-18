#include <iostream>

using namespace std;

int* preparePitches(int ground){
    int* orders = new int[ground];
    for(int i = 0; i < ground; i++){
        orders[i] = (i + 1) * 10000;
    }
    return orders;
}

int main(){
    int ground = 5;
    int* location = preparePitches(ground);

    for(int i =0; i < ground; i++){
        cout << "ground " << i + 1 << " has " << location[i] << " capacity\n";
    }

    delete[] location;
    
    return 0;
}