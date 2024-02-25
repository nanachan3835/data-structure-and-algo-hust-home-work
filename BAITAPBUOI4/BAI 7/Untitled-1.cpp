#include<iostream>

using namespace std;

int main() 
{
    int size,i,j,t,m,k,p;
    cin>>size;
    m=size/2;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            
            if(j<size/2-i)
            {
                cout<<size/2-j<<" ";
            }
            else
            {
               cout<<"  ";
            }
            
        }
        
        for(j=m;j<size;j++)
        {
            
            if(j>size/2+i)
            {
                cout<<" "<<j-size/2;
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}