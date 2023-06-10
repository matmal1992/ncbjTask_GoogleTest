#include <iostream>
#include <stdexcept>

using namespace std;

struct isimple
{
    virtual int getValue() const = 0;
    virtual void setValue(int) const = 0;
};

class Derived : public isimple
{
    mutable int value;
    mutable int counter = 0;

public:
    Derived() : value(0) {}

    virtual int getValue() const override;
    virtual void setValue(int value) const override;

    void incrementCounter()const;
    int getCounter();
};

int ncbj_function(const isimple &a, int b);

int getRandomNumber();