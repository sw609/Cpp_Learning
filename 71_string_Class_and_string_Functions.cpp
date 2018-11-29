#include <iostream>
#include <string>
//gives you string functions
using namespace std;


int main(){

    string happy;
    //cin >> happy;
    getline(cin, happy);
    cout << "the string you entered is " << happy << endl;

    // if you input a sentence or a phrase
    // it will only output the first word till it encounters the first white space

    // when using cin, it stops at the first white space it encounters

    // if you want the whole line of the input, it's better to use getline(cin, x)

    //=====================the following is actually different way of assigning string variables

    string s1("hello world ->");
    string s2;
    string s3;

    s2 = s1; 
    // it just does the copy

    s3.assign(s1);
    // it does the exact same thing, and just copy it

    cout << s1 << s2 << s3 << endl;

    // string is just an array of characters

    // for example

    string s4 = "chvgdcbkfe";
    cout << s4.at(3) << endl;
    // and it output g, which is at index 3, the forth item

    for (int x = 0; x < s4.length(); x++){
        cout << s4.at(x) << ' ';
    }


}