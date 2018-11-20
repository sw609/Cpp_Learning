#include <iostream>
#include "Sally.h"
#include "Sally.cpp"
using namespace std;

// a member is a fancy term that is in your class

// member initializer is just to initialize variable in constructor

int main(){

    Sally a(34);
    Sally b(21);
    Sally c;
    
    c = a+b;

    cout << c.num << endl;

    // it basically give you 55
    // becase we overload the addition operator in the file


}
