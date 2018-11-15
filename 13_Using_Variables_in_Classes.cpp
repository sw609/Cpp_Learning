#include<iostream>
#include <string>
//include the string file
using namespace std;

class myClass{
public:
    string name;
};

class myClass1{
public:
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
    myClass mc;
    mc.name = "class";
    cout << mc.name << endl;
    //however, makeing name public is not a secure program
    //it makes program very easy to mess up

    myClass1 mc1;
    // mc1.name = "class";
    // cout << mc.name;
    //above two will cause error
    //name is a private item of myClass1

    mc1.setName("class");
    cout << mc1.getName() << endl;
    //however, you can write a public methods to access its name;
    return 0;
}

