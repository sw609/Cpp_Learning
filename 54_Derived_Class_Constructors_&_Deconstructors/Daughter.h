#include "Mother.h"
#include <string>
#ifndef DAUGHTER_H
#define DAUGHTER_H
using namespace std;

class Daughter: public Mother{
    // it does not inherit the constructor and the deconstructor of the base class
    public:
        Daughter();
        ~Daughter();
};

#endif // DAUGHTER_H