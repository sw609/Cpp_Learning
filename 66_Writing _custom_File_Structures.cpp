#include <iostream>
#include <fstream>
using namespace std;


int main(){

    ofstream theFile("players.txt");

    cout << "Enter player ID, Name, and Money" << endl;
    cout << "press Ctrl+z tp quit\n";

    int idNumber;
    string name;
    double money;

    while(cin >> idNumber >> name >> money){
        theFile << idNumber << ' ' << name << ' ' << money << endl;
    }

    theFile.close();


}