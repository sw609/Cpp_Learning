#include <iostream>
#include <string>
//gives you string functions
using namespace std;


int main(){

    string s1("OMG i think i am pretty!!");
    cout << s1.substr(17, 7) << endl;
    // starting from 17, and 7 more after that

    string one("apples ");
    string two("beans ");
    cout << one << two << endl;
    one.swap(two);
    cout << one << two << endl;
    // it flip-flop!

    string s2("ham is spam oh yes i am");
    cout << s2.find("am") << endl;
    // it outputs a 1
    // it gives you the location where it finds the first character
    cout << s2.rfind("am") << endl;
    // it is a reverse find
    // which gives you the last am
    // it outputs a 21


}