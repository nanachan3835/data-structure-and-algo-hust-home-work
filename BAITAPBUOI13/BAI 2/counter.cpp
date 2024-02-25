#include "counter.hpp"
#include <iostream>

using namespace std;

Counter::Counter(int c):count(c){}

int Counter::getCount() const { return count;}

void Counter::setCount(int c){count =c;};

Counter & Counter::operator++()
{
    ++count;
    return *this;
}

const Counter Counter::operator++(int dummy)
{
    Counter old(*this);
    ++count;
    return old;
}

ostream & operator<<(ostream &out, const Counter & Counter)
{
    out << Counter.count;
    return out;
}