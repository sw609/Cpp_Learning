#include<iostream>

using namespace std;

int tuna = 20;

int main(){

    int tuna = 69;
    cout << tuna << endl;
    // output 69
    // it will choose local variable first

    // so how do i tell my computer which i want to use
    // thus, it comes to unary scope resolution
    // :: means use the global variable
    cout << ::tuna << endl;
    // outouts 20
    
}

void bucky(){

}