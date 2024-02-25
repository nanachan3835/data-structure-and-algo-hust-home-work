#include<iostream>

using namespace std;

int * squarePtr(int);
int * squareRef(int);

int main()
{
    int number = 8;
    cout<<number<<endl;
    cout<<squarePtr(number)<<endl;
    cout<<squareRef(number)<<endl;
    
    system("pause");
    
}

int * squarePtr(int number)
{
    int * dynamicAllocationResult = new int(number * number);
    return dynamicAllocationResult;
}
/*
int * squareRef(int number)
{
    int dynamicAllocationResult = new int(number * number);
    return *dynamicAllocationResult;
}*/