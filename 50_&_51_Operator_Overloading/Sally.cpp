#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(){

}

Sally::Sally(int a): num(a){
}

Sally Sally::operator+(Sally aso){
    Sally brandNew;
    brandNew.num = num + aso.num;
    return (brandNew);
}


// make sure don't put semi-colon inside; it's just like list



