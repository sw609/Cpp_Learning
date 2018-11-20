#include <iostream>
#include "People.h"
#include "People.cpp"
#include "Birthday.h"
#include "Birthday.cpp"
using namespace std;

// composition is like you have a class object inside another class

int main(){

    Birthday birthObj(6, 9, 1998);

    People peopleObj("daisy", birthObj);

    peopleObj.printInfo();


}
