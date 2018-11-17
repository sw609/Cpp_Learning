#include<iostream>

using namespace std;

void passByValue(int x);
void passByReference(int* x);

int main(){
    
    // pass by value
        // passing by a copy of the variable
        // and the original value will not change
        // sometimes kind of stressful on comouter
    // pass by reference

    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << "betty is now " << betty << endl;
    cout << "sandy is now " << sandy << endl;
    // betty is now 13
    // sandy is now 66

    // so value is making a copy
    // reference can make changes to original variable

}

void passByValue(int x){
    x = 99;
}

void passByReference(int* x){
    *x = 66;
    // here the * is to dereference of the pointer
}