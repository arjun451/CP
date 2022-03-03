#include<iostream>
using namespace std;
int StrToInt(string s,int size)
{
    if(size==0)
    return 0;
     int f = StrToInt(s,size-1);
     return f*10+s[size-1]-'0';
}
int main()
{
string s=" ";
cout<<StrToInt(s,0);
return 0;
}