#include<iostream>

using namespace std;

int squareConst(const int);
int squareNonConst(int);
int squareConstRef(const int &);
int squareNonConstRef(int &);

int main()
{
    int number=0;
    const int consnumber=9;

    cout<<squareConst(number)<<endl;
    cout<<squareNonConst(number)<<endl;
    cout<<squareConst(consnumber)<<endl;
    cout<<squareNonConst(consnumber)<<endl;

    cout<<squareConstRef(number)<<endl;
    cout<<squareConstRef(consnumber)<<endl;
    cout<<squareNonConstRef(number)<<endl;
    
    system("pause");

}

int squareConst(const int number)
{
    return number*number;
}

int squareNonConst(int number)
{
    number*=number;
    return number;
}

int squareConstRef(const int & number)
{
    return number*number;
}

int squareNonConstRef(int & number)
{
    return number*number;
}

