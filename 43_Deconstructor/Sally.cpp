#include "Sally.h"
#include <iostream>
using namespace std;


Sally::Sally(){
    cout << "i am a constructor" << endl;
}

Sally::~Sally(){
    // whenever you create a deconstructor
    // it can never accept a parameter
    // not even have a return type
    cout << "i am the deconstructor" << endl;
}