#include<iostream>

using namespace std;


int main(){
    
    int fish = 5;
    // & is an address operator
    cout << &fish << endl;
    // then you will get a weird hex number
    // which is the actual memory address on the computer where you can find the variable fish

    // a pointer is a special type of variable that points to a memory address
    // a pointer contains variable addresses value

    int *fishPointer;
    fishPointer = &fish;

    cout << fishPointer << endl;

    // the two couts will be the same
    

}

