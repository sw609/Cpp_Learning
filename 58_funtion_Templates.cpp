#include <iostream>
using namespace std;

// int addCrap(int a, int b){
//     return a+b;
// }

// what if we want to add some double
// do we just create new functions all over again?


template <class happy>
happy addCrap(happy a, happy b){
    return a+b;
}

// it just works the same as ususal
// it can work with generic data type


int main(){

    // int x =7, y = 43, z;
    double x =7.65 , y = 43.54, z;
    

    z = addCrap(x,y);

    cout << z << endl;

}