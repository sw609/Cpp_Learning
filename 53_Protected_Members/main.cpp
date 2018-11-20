#include <iostream>
#include "Mother.h"
#include "Mother.cpp"
#include "Daughter.h"
#include "Daughter.cpp"
using namespace std;


int main(){

    Daughter tina;
    tina.doSomething();
    // so the daughter do able to access both the public and protected variables in the base class
    // so if you try to access the private member of the base class, you will get an error

}
