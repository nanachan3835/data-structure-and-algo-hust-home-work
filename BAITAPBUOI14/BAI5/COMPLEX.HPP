#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

#include<iostream>

template <typename T> class MyComplex;

template <typename T>

std::ostream&operator<<(std::ostream & out,const MyConplex<T>&c);
template <typename T>
std::istream & operator<<(std::istream & in,MyComplex<T> & c);

template<typename T> 
class MyComplex
{
    private:
    T real,img;
    public:

    explicit MyComplex<T>(T real=0,T img=0)
    :real(real),img(img);
    //////
    
    real+=rhs.real;
    img+=rhs.img;
    return *this;

    MyComplex<T> &operator+=(T value)
    {
        real+=value;
        return *this;
    }

    bool operator==(const MyComplex<T>&rhs) const{
        return (real==rhs.real&&img==rhs.img)
    }