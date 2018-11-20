#include "Hannah.h"
#include <iostream>
using namespace std;


Hannah::Hannah(int a): h(a) {
}

// make sure don't put semi-colon inside; it's just like list

void Hannah::printCrap(){
    cout << "h = " << h << endl;
    cout << "this-> " << this->h << endl;
    // so we mention, whenever you use an array you are referring to a pointer
    // so this is a pointer
    // which means that the this is the current object you are working through
    cout << "(*this).h= " << (*this).h << endl;
    // * star sign is dereference of the pointer
    // which means it takes the memory location of the object and calling it by its variable name
}

