#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int c1=0
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='}'&&c1>0)
        c1--;
        if(s[i]=='{')
        c1++;
    }
    if(c1==0)
    cout<<"correct";
    else
    cout<<"error";
    return 0;

}