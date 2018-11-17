#include <iostream>
using namespace std;

// an abstract class is just a class with pure virtual functions in it
// every derived class must override the function

class Enemy{
public:
    virtual void attack()=0;
    // {
    //     cout << "i am the enermy class" << endl;
    //     // however it goes through as expected
    //     // because it's an virtual function
    //     // if the more specific object override the attack function, it will use that instead
    //     // otherwise use enemy's attack
    // }
    // however, a pure virtual function does not have the body at all
    // it does not do anything at all.
    // it sub classes MUST MUST override this pure virtual function
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout << "ninja attack!" << endl;
        }
}; 

class Monster: public Enemy{
    public:
            void attack(){
            cout << "monster attack!" << endl;
        }

        // if i comment these out
        // now the monster attack will become:
        // ninja attack!
        // i am the enermy class
        // however, a pure virtual function does not give you the option to inherit from the base class

        // if you don't override the pure virtual function, you will get an error
};

int main(){

    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();

    // now I can get different attack function from this virtual function
    // don't have to switch back to the ninja or monster class to call attack!

    // Output:
    // ninja attack!
    // monster attack!

}