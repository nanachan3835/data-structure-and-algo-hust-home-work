#include<iostream>

using namespace std;

void square(int &);

int main()
{
    int number=8;
    cout<<"int main()"<<&number<<endl;
    cout<<number<<endl;
    square(number);
    cout<<number<<endl;
    system("pause");
}

void square(int &pnumber)
{
    cout<<"in square(): "<<&pnumber<<endl;
    pnumber*=pnumber;
}