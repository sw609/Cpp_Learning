#include "Sally.h"
#include <iostream>
using namespace std;


Sally::Sally(int a, int b): regVar(a), constVar(b){
}

// make sure don't put semi-colon inside; it's just like list

void Sally::print(){
    cout << "regular value is: " << regVar << " const vvariable is: " << constVar << endl;
}

