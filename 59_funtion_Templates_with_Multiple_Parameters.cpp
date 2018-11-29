#include <iostream>
using namespace std;


template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
    return (a<b?a:b);
}


int main(){

    int x = 89;
    double y = 56.78;

    cout << smaller(x,y) << endl;
    // this will only give you a 56, and chopped up the double part
    cout << smaller(y,x) << endl;

}