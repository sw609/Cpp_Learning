#include<iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray);
// don'y forget to prototype your functiom

int main(){
    int ar[3] = {20, 54, 675};
    int hi[6] = {54, 24, 7, 8, 9, 99};

    printArray(ar, 3);
    cout << endl;
    printArray(hi, 6);

}

void printArray(int theArray[], int sizeOfArray){
    for(int x=0; x<sizeOfArray; ++x){
        cout << theArray[x] << endl;
    }
}
