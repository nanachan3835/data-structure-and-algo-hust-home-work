#include<iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;

//void print(const vector<int> & v);

int main()
{
    vector<int> v1(5);

    for(int i=0;i<v1.size();++i)
    {
        v1[i]=(i+1)*2;
    }

    for(int i=0;i<v1.size();++i)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    vector<int> v2;

    v2=v1;
    for(int i=0;i<v2.size();++i)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    system("pause");

    return 0;
}
