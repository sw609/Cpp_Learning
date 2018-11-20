#include <iostream>
#include "Mother.h"
#include "Mother.cpp"
#include "Daughter.h"
#include "Daughter.cpp"
using namespace std;


int main(){

    Daughter dina;

    // when created, it will cout the base class constructor
    // I am the mother constructor!
    // Mother destructor!
    

    // after building daughter's constructor and deconstructor
    // I am the mother constructor!
    // I am the daughter constructor!
    // Daughter constructor!
    // Mother destructor!
    // mother constuctor comes first, and then daughter constructor
    // and the daughter deconstuct first, then mother decon
}
