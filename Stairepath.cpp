#include<iostream>
using namespace std;
int Starepath(int n)
{
    if(n==0)
    return 1;
    if(n<0)
    return 0;
    int x =Starepath(n-1);
    int y=Starepath(n-2);
    int z=Starepath(n-3);
    return x+y+z;
}
int main()
{
int n;
cin>>n;
cout<<Starepath(n);
return 0;
}