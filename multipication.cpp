#include<iostream>
using namespace std;
int mut(int a,int b)
{
    if(a==1)
    return a*b;
    int r= mut(a-1,b);
    return r+b;
}
int main()
{
    int q=3,p=5;
    cout<<mut(3,5);
    return 0;
}
