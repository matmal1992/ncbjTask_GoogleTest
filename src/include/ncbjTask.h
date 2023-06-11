#ifndef _NCBJTASK_H_
#define _NCBJTASK_H_

#include <iostream>
#include <stdexcept>

using namespace std;

struct isimple
{
    virtual int getValue() const = 0;
    virtual void setValue(int) const = 0;
    virtual int getCounter() const = 0;
};

class Derived : public isimple
{
    mutable int value;
    mutable int counter;

public:
    Derived() : value(0), counter(0) {}

    virtual int getValue() const override;
    virtual void setValue(int value) const override;
    virtual int getCounter() const override;
};

int ncbj_function(const isimple &a, int b);
int getRandomNumber();

#endif