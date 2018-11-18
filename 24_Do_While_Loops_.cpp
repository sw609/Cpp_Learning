#include<iostream>

using namespace std;

// the do while loop is basically just run a bit of code first and then start looping it

int main(){
    
    int x = 1;

    do{
        cout << x << endl;
        x++;
    }while(x<10);

    // the do code just tells you that it at least run one time!
    // guranteed!
    // even if the while condition never makes possible, such as `int x = 99`

}

