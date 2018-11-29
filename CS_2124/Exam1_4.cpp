#include <iostream>
#include <string>
using namespace std;

void foo(int& x){
    int* p = &x;
    *p = 7;
}


int main(){

    int val = 9;
    foo(val);
    cout << val << endl;

}