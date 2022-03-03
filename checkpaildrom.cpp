#include<iostream>
using namespace std;
bool Palindrom(string str,int st,int end)
{
    if(st>=end)
      return true;
      if(str[st]!=str[end])
      return false;
    bool f=  Palindrom(str,st+1,end-1);
    if(f==false)
    return f;
    return true;
}
int main()
{
 string s;
 cin>>s;
 int l=s.length();
 cout<<Palindrom(s,0,l-1);
    return 0;
}