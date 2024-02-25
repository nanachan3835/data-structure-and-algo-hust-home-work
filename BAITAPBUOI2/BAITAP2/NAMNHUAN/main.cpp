#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int dem=0;
    while(i<2022)
    {
        if(i%4==0&&(i/4)*4==i)
        {
            cout<<i<<endl;
            dem++;
        }

        i++;
    }
    cout<<dem;
    return 0;
}
