#include <iostream>
#include "Sally.h"
#include "Sally.cpp"
using namespace std;

int main(){

    Sally sallyObject;
    Sally* sallyPtr = &sallyObject;
    sallyObject.printCrap();
    sallyPtr->printCrap();

    // whenever you use a pointer to access a class method, you need to use "->"

}
