#include<iostream>
using namespace std;

int main(){

    int tuna;
    tuna = 54;
    //you don't have to set the "int" type again

    tuna = 76;
    //your computer will wipe out the old value and set space for the new value

    cout << tuna;
    //it will print out the new value 76, since it has been overwritten

    return 0;
}