#include<iostream>

using namespace std;

int main(){
    
    int ar[9];
    cout << "Element - Value" << endl;

    for (int x=0; x<=8; ++x){
        ar[x] = 99;
        cout << x << "------" << ar[x] << endl;
    }
}

