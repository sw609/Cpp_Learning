#include<iostream>
using namespace std;

int main(){
    cout << "boy i love bacon ";
    cout << "and ham ";
    // both cout in the same line;
    //you have to tell cout to print on the other line, such as endl;

    cout << "boy i love bacon " << endl;
    cout << "and ham ";

    //this is equivalent as the following
    
    cout << "boy i love bacon \n";
    cout << "and ham ";

    cout << "\nboy\ni\nlove\nbacon\n";
    //you can have multiple new lines in a single statement

    return 0;
}