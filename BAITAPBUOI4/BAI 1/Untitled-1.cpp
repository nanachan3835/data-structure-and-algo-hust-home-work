#include<iostream>

using namespace std;

int main()
{
    int i,j;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {   
         cout<<endl;
        if(i%2==0)
        {    
            
            for(j=0;j<n+1;j++)
            {
                if(j==0)
                {
                    cout<<" ";
                }
                else
                {
                    cout<<" #";
                }
            }
        }
        else
        {
             for(j=0;j<n+1;j++)
            {
                if(j==n)
                {
                    cout<<" ";
                }
                else
                {
                    cout<<"# ";
                }
            }
        }
    }
    return 0;

}