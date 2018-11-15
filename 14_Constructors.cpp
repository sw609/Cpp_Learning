#include<iostream>
#include <string>
//include the string file
using namespace std;

//a constructor is a function that will be called automatically as soon as you create an object
//a constructor never has a return type

class myClass{
public:
    // myClass(){
    //     cout << "this will be printed automatically" << endl;
    //     //however people don't normally print things in constructors
    // }
    myClass(string z){
        //however people can use constructor to initialize values
        setName(z);
    }
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
private:
    string name;
};

int main(){
    myClass mc("My Class");
    cout << mc.getName() << endl;

    return 0;
}

