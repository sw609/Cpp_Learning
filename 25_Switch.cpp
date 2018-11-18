#include<iostream>

using namespace std;


int main(){
    
    int age = 22;

    // if(age == 16){

    // }else if...
    // it is just a lot of code
    // instead, try switch!

    switch(age){
        case 16:
            cout << "hey you can drive now!" << endl;
            break;
        case 18:
            cout << "go buy some lotto tickets~!" << endl;
            break;
        case 21:
            cout << "buy me some beer" << endl;
            break;
        default:
            cout << "sorry you get nothing" << endl;

    }

}

