#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double sum=0.0;
    int dem=1;
    while(dem<=n)
    {
        sum=sum+1.0/dem;
        dem++;
    }
    cout<<sum;
    return 0;
}
