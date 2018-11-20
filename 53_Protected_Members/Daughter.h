#include "Mother.h"
#include <string>
#ifndef DAUGHTER_H
#define DAUGHTER_H
using namespace std;

class Daughter: public Mother{
    // public inheritant is not able to access the private items in the base class
    // but it get both base class' public and protected
    public:
        Daughter();
        void doSomething();
};

#endif // DAUGHTER_H