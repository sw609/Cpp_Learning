#include <iostream>
#include "Sally.h"
#include "Sally.cpp"
using namespace std;

// the keyword const
// it means that you can not change the object you create with const

int main(){

    int x = 3;
    x = 5;
    cout << x << endl;
    // this is fine

    const int y = 7;
    // int y = 5;
    // this will cause you error
    cout << y << endl;

    Sally salObject;
    salObject.printShiz();
    // works fine

    const Sally constObject;
    // constObject.printShiz();
    // however you will get an error with above
    // becaue this sally is a constant, while the function is not constant
    constObject.printShiz2();

}
