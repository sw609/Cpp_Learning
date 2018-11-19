#include<iostream>

using namespace std;

// a friend of a class is totally separated from a class
// but it still have access to the function and variableof the class

class StankFist{
    public:
        StankFist(){stinkyVar=0;}
    private:
        int stinkyVar;

    friend void stinkysFriend(StankFist &sfo);
    // now this function have access to every functions and variable of this class
};

void stinkysFriend(StankFist &sfo){
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}

int main(){
    
    StankFist bob;
    stinkysFriend(bob);

}

