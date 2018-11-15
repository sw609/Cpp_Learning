#include<iostream>
using namespace std;

class myClass{
//start with the class with its own class name
//always follow with semi-colon after it
public:
//anything after that can be accessed outside of the class
    void coolSaying(){
        cout << "preaching to the choir" << endl;
    }
};

int main(){
    myClass myClassObject;
    myClassObject.coolSaying();
    //you have to initialize an object to approach the method in class
    //only public methods can be accessed
    return 0;
}

