#include<iostream>

using namespace std;

int square(int);

int main()
{
    int number =3;
    cout<<"in main()"<<&number<<endl;
    cout<<number<<endl;
    cout<<square(number)<<endl;
    cout<<number<<endl;
    system("pause");
}

int square(int n)
{
    cout<<"in square(): "<<&n<<endl;
    n*=n;
    return n;
}