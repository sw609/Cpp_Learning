#include<iostream>

using namespace std;

int main(){
    // int x = 1;

    // while(x <= 5){
    //     cout << x << endl;
    //     x++;
    //     //equivalent to x = x+1
    // }
    
    int x = 1;
    int number;
    int sum = 0;

    while (x<=5){
        cin >> number;
        sum += number;
        x++;
    }

    cout << "your total is " << sum << endl;
    
    return 0;
}

