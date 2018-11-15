#include<iostream>

using namespace std;

int main(){
    int age = 24;
    // int age = 87;
    age =  102;

    if (age>60){
        cout << "wow you are old" << endl;
        if (age>100){
            cout << "why are you still alive?" << endl;
        }
    }else{
        cout << "you are young, get a job" << endl;
    }
    
    return 0;
}

