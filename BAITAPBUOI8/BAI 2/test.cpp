#include<iostream>

using namespace std;

int sum(int n1,int n2,int n3 = 0,int n4 = 0,int n5 = 0);

int main()
{
    cout<<sum(1,1,1,1,1)<<endl;
    cout<<sum(1,1,1,1)<<endl;
    cout<<sum(1,1,1)<<endl;
    cout<<sum(1,1)<<endl;
    //cout<<sum(1)<<endl;

}

int sum(int n1,int n2,int n3,int n4,int n5)
{
    return n1+n2+n3+n4+n5;
}