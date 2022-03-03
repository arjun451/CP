#include<iostream>
using namespace std;
void Tower(int n,char s,char a,char d)
{
    if(n==1)
    {
        cout<<s<<"->"<<d<<endl;
    }
    Tower(n-1,s,d,a);
    cout<<s<<"->"<<d<<endl;
    Tower(n-1,a,s,d);
    cout<<s<<"->"<<d<<endl;
}
int main()
{
int n;
cin>>n;
Tower(n,'s','a','d');
    return 0;
}