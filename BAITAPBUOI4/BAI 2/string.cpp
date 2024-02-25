#include<iostream>
#include<string>
#include<limits>

using namespace std;

int main()
{
    string message("hello");
    cout<<message<<endl;

    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Enter a message(with spaces) : ";
    getline(cin,message);
    cout<<message<<endl;
    return 0;
    
}