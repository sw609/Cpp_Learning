#ifndef MOTHER_H
#define MOTHER_H

class Mother{
    public:
        int publiv;
        Mother();
    protected:
        // anything inside can access it
        // any friend can access it
        // even derived class can access it
        int protectedv;
    private:
        // public inheritant is not able to access the private items in the base class
        // that's why people use public methods to access to private members
};

#endif // MOTHER_H