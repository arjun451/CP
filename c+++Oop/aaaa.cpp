#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n],s=0;
   int b[100001],m=-1;
   for(int i=0;i<100001;i++)
   b[i]==0;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    s+=a[i];
    b[a[i]]++;
    if(b[a[i]]>m)
    m=b[a[i]];

   }
   if(s%2!=0)
   cout<<"-1";
   else
   {
    cout<<(n-m)/2;
   }


   return 0; 
}