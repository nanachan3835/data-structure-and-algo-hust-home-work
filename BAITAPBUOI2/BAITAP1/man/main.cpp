#include <iostream>

using namespace std;

int main()
{
   int i=0;
   int TONG=0;
   while(i<1001)
   {
       if(i%13==0||i%15==0||i%17==0)
       {
           if(i%30!=0)
           {
               TONG=TONG+i;
           }
       }
       i++;
   }
cout<<TONG;
return 0;
}
