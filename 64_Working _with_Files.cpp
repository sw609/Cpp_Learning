#include <iostream>
#include <fstream>
using namespace std;


int main(){

    ofstream happyFile;
    happyFile.open("tuna.txt");
    // if the file does not exist, it will automatically create one for you

    happyFile << "I love tuna and tuna loves me! \n";

    happyFile.close();


}