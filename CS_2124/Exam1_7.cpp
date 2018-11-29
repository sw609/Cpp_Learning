#include <iostream>
#include <string>
using namespace std;

class Thing{
    public:
        void display(){cout << name << endl; }
        string name;
        Thing& operator = (string const &val){
            name = val;
            return *this;
        }
};


int main(){

    Thing x;
    string fred = "fred";

    x = fred;

    x.display();

}