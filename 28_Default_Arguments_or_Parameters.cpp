#include<iostream>

using namespace std;

int volume(int l=1, int w=1, int h=1);

int main(){

    cout << volume(4,5,5) << endl;
    cout << volume() << endl;
    cout << volume(4,5) << endl;
    
}

int volume(int l, int w, int h){
    return l*w*h;
}
