#include<iostream>

using namespace std;

// sometimes you don't know how many times the user want to enter the program
// most cases, when enter negative 1, it stops

int main(){

    int age;
    int ageTotal = 0;
    int num_people = 0;

    cout << "Enter first persons are or -1 to quit" << endl;
    cin >> age;

    while (age!=-1){
        ageTotal += age;
        num_people++;

        cout << "Enter first persons are or -1 to quit" << endl;
        cin >> age;
    }

    cout << "NUmber of people entered: " << num_people << endl;
    cout << "Average age: " << ageTotal/num_people << endl;

    return 0;
}

