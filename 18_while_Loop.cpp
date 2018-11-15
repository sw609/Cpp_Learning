#include<iostream>

using namespace std;

int main(){
    int bacon = 0;

    while(bacon < 5){
        cout << "bacon is " << bacon << endl;
        //if it stops here, the loop will run forever
        bacon = bacon + 1;
        //bacon = bacon + 2;
    }
    
    return 0;
}

