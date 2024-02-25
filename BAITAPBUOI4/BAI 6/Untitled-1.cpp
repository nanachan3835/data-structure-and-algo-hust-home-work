#include<iostream>

using namespace std;

int main()
{
    int size,i,j;
    cin>>size;

    for(i=0;i<size;i++)
    {
        if(size%2==0)
        {
        size++;
        continue;
        }
        for(j=0;j<size;j++)
        {
            if(j<(size/2)-i || j>(size/2)+i)
            {
                cout<<"#";

            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}