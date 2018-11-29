#include <iostream>
using namespace std;


template <class T>
class Happy{
    T first, second;
    public:
        Happy(T a, T b){
            first = a;
            second = b;
        }
        T bigger();
};

template <class T>
T Happy<T>::bigger(){
    // i don't know why but you just need to include the template in every class
    return (first>second?first:second);
}


int main(){

    Happy <int> ha(69, 105);

    // you just have to state this type template after every class

    cout << ha.bigger() << endl;

}