#include<iostream>

using namespace std;

int main(){

    // in the new C++ you don't have to have return 0 in the main
    // it just assume you return 0 anyway

    int x = 10;
    x += 10;
    cout << x << endl;

    x -= 3;
    cout << x << endl;

    x *= 5;
    cout << x << endl;

    x /= 4;
    cout << x << endl;

    x %= 2;
    cout << x << endl << endl;

    // 20
    // 17
    // 85
    // 21
    // 1

    int y = 20;
    cout << y++ << endl;
    cout << y << endl << endl;

    // this post increment adds after the first cout
    // 20
    // 21

    int z = 20;
    cout << ++z << endl;
    cout << z << endl;

    // this pre increment adds first, before the cout
    // 21
    // 21
}

