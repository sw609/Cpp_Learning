#include <iostream>
#include <fstream>
using namespace std;


int main(){

    ofstream happyFile("beefjerky.txt");

    if (happyFile.is_open()){
        cout << "ok the file is open" << endl;
    }else{
        cout << "hey you just meassssed up" << endl;
    }
    
    happyFile << "oh I love beef! \n";

    happyFile.close();


}