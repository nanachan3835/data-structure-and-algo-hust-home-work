#include<iostream>

using namespace std;

int main()
{
    const int SIZE=5;
    int number[SIZE]={11,22,44,21,41};
    
    cout<<&number[0]<<endl;
    cout<<number<<endl;
    cout<<*number<<endl;
    cout<<*(number+1)<<endl;
    cout<<*(number+4)<<endl;
    system("pause");
}