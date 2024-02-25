#include <iostream>
#include <string> 
using namespace std;
int main() 
{
cout << "Enter your age: ";
int age; 
cin >> age; 
cin.ignore();
cout << "Enter your name: "<<endl; 
string name; 
getline(cin,name); 
cout << "Hello, " << name << 
endl; 
cout << "Your age " << age << 
endl; 
return 0;
}