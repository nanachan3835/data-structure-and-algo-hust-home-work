#ifndef COUNTER_HPP
#define COUNTER_HPP
#include<iostream>

class Counter
{
    private:
    int count;
    
    public:
    Counter(int count = 0);
    int getCount() const;
    void setCount(int count);
    Counter & operator++();
    const Counter operator++(int dummy);
    friend std::ostream & operator<<(std::ostream & out , const Counter & counter);
};

#endif