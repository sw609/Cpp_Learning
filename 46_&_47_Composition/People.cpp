#include "People.h"
#include <iostream>
#include "Birthday.h"
using namespace std;


People::People(string x, Birthday dob): name(x), dateOfBirth(dob){
}

// make sure don't put semi-colon inside; it's just like list

void People::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}


