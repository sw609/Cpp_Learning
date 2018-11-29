#include <iostream>
#include <string>
//gives you string functions
using namespace std;


int main(){

    string s1("hi my name is happy and i lvoe baconand ham!");

    cout << s1 << endl;

    s1.erase(20);
    // it includes the 20th character as well
    cout << s1 << endl;

    string s2("hi my name is happy and i lvoe baconand ham!");

    cout << s2 << endl;
    s2.replace(14, 5, "newt thesus");
    // it includes the 20th character as well
    cout << s2 << endl;
    // hi my name is newt thesus and i lvoe baconand ham!

    s2.insert(14, "lucky ");
    cout << s2 << endl;
    // hi my name is lucky newt thesus and i lvoe baconand ham!


}