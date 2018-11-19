#include<iostream>

using namespace std;

// sizeof just determine the size of something

int main(){
    
    char c;
    cout << sizeof(c) << endl;
    // this takes 1 bite

    int i;
    cout << sizeof(i) << endl;
    // this takes 4 bite

    // while every computer stores memory differently

    double d;
    cout << sizeof(d) << endl;
    // this takes 8 bite
    // the more precise a memory is, the more bites it take

    double ar[10];
    cout << sizeof(ar) << endl;
    // this is 80 bite

    // like this can help you get the number of the item in an array
    // such as
    cout << sizeof(ar)/sizeof(ar[0]) << endl;
    // so now you have 10
    // which means you have 10 elements in this array

}

