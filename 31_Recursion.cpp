#include<iostream>

using namespace std;

// recursion is the idea that a function can call itself

// void bucky(){
//     cout << "omgwtfbbq";
//     bucky();
// }

// that's why we said we need a base case
// otherwise, the above function will just crush your computer

// take a factorial as an example

int factorialFinder(int x){
    // we will give a base case
    if (x==1){
        return 1;
    }else{
        return x*factorialFinder(x-1);
    }
}

int main(){

    cout << factorialFinder(3) << endl;

}