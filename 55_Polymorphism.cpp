#include <iostream>
using namespace std;

//allow you to call attack function for different object

class Enemy{
protected:
    int attackPower;
public:
    void setAttackPower(int a){
        attackPower = a;
    }
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout << "i am a ninja, ninja chop! -" << attackPower << endl;
        }
}; 

class Monster: public Enemy{
    public:
        void attack(){
            cout << "monster must eat you!!!! -" << attackPower << endl;
        }
};

int main(){

    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    n.setAttackPower(29);
    m.setAttackPower(99);
    n.attack(); //can't use enemy1 because its type enemy
    m.attack(); //Enemy class does not have attack
    return 0; //virtual members make this even easier

    // Output:
    // i am a ninja, ninja chop! -29
    // monster must eat you!!!! -99

}