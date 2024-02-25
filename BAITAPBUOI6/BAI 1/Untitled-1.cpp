#include<iostream>

using namespace std;

void print(const int a[],int size)
{
    cout<<" { ";
    for(int  i = 0 ;i<size;++i)
    {
        cout<<a[i];
        if(i<size-1)
        {
            cout<<" ; ";

        }
    }
    cout<<" } ";
}

void bubbleSort(int a[],int size)
{
    bool done=false;
    int pass = 0;
    int temp;
    while(!done)
    {
        cout<<"PASS"<<++pass<<" "<<endl;
        done=true;

        for(int i=0;i<size-1;i++)
        {
            if(a[i]>a[i+1])
            {
                print(a,size);
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                done=false;
                cout<<" => ";
                print(a,size);
                cout<<endl;

            }
        }
    }
}

int main()
{
    const int SIZE=8;
    int a[]={8,4,5,3,2,9,4,1};
    print(a,SIZE);
    cout<<endl;
    bubbleSort(a,SIZE);
    print(a,SIZE);
    cout<<endl;
    return 0;
}
