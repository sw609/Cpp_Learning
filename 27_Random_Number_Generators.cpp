#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){

    // srand(44);
    // this is the seed of the number
    // each unique passing in parameter gives out different rounds of random number
    // however, the same srand() has the same random set

    // a simple trick is to use time to generate the number
    srand(time(0));

    // fancy!!!
    
    for(int x = 1; x<25; x++){
        cout << 1+(rand()%6) << endl;
        // %6 let you have number within 0 to 5
        // adding in this math operations, now you have a dice
    }
    // but this number is always the same
    // wait, what???

    // the truth is that no computer generates random number
    // it has to follow a certain complex algorithm or a certain pattern

}

