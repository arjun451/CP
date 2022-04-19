#include<iostream>
using namespace std;
#include<string>
int main()
{
   int n,r1,r2,r3;
   cin>>n>>r1>>r2>>r3;
   int R1max = n/r1+(n%r1)/r2;
   int R2max=0;
   while(1)
   {
      if(n>r2)
      {
          int x= n/r2;
          R2max+=x;
          n=n%r2+x*r3;
      }
      else
      break;
      
   }
   R2max+=n/r1;
   if(R1max>R2max)
   cout<<R1max;
   else
   cout<<R2max;


    return 0;
}