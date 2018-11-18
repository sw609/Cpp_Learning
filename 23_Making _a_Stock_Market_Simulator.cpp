#include<iostream>
#include <cmath>
// we need the pow() funtion cmath

using namespace std;

int main(){
    
    // we gonna start with 10,000 dollar and will invest in stock market
    // we are smart enought to earn 1% of money each day
    // in the end of 20 days, how much money did we make

    // remember int is for decimal only
    // here we need float

    float a; // the amount of the money that you earned
    float p = 10000; // princple amount
    float r = .03; // rate

    for (int day = 1; day <= 30; day++){
        a = p * pow(1+r, day);
        cout << day << "-----" << a << endl;
    }

}

