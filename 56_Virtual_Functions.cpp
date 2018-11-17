#include <iostream>
using namespace std;

//allow you to call attack function for different object

class Enemy{
public:
    virtual void attack(){

    }
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