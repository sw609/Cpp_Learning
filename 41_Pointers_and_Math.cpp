#include<iostream>

using namespace std;

int main(){
    
    int ar[5];
    int* ap0 = &ar[0];
    int* ap1 = &ar[1];
    int* ap2 = &ar[2];
    int* ap3 = &ar[3];

    cout << "ap0 is at " << ap0 << endl;
    cout << "ap1 is at " << ap1 << endl;
    cout << "ap2 is at " << ap2 << endl;
    cout << "ap3 is at " << ap3 << endl;

    // the last two digits of the output increases by 4 bit
    // because we are storing int in it

    ap0 +=2;

    cout << "bp0 is now at " << ap0 << endl;
    // however, this increase by 8, instead of 2
    // it actually means it is going to point to whatever that is 2 element away
    // make sense!!

}

