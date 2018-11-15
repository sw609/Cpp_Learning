#include<iostream>
using namespace std;

int main(){

    int x = 4+6;
    cout << x;
    //it prints out the calculation, which is 10;

    int x = 4-6;
    cout << x;
    //-2

    int x = 4*6;
    cout << x;
    //24

    int x = 81 / 3;
    cout << x;
    //27

    int x = 81 / 2;
    cout << x;
    //it will ouput 40
    //however, if you want the remainder, you will need the module sign %

    int x = 81 % 2;
    cout << x;
    //outputs 1

    int x = 24 % 7;
    cout << x;
    //outputs 3

    int x = 6*4 + 8*4 + 9/20;
    cout << x;
    //outputs 56
    //associate of property
    //parentheses go first, then multiplication/division, and then add/subtract 

    int x = (4 + 3) * 7;
    cout << x;
    //49
    

    return 0;
}