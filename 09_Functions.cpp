#include<iostream>
using namespace std;

void printSomeText();
//state it in the beginning so it can be used before it's been defined
//or you can define the function in the front

int main(){
    printSomeText();
    //if you don't initialize it in the beginning, you will recieve an error
    return 0;
}

void printSomeText(){
//specify a function type
//name the function following () to initialize it as a function
//use {} to state statement
    cout << "oooooo i am a text on the screen" << endl;
    //void function does not need to return anything
}