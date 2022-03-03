#include<iostream>
using namespace std;
int NumZero(int n)
{
    if(n==0)
    return 0;
    int f= NumZero(n/10);
    if(n%10==0)
    return 1+f;
    return f;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<NumZero(n);
    return 0;
}