#include<iostream>
using namespace std;
string Replace(string s,int size)
{
  if(size==0)
  return "";
  string st=Replace(s,size-1);
  if(s[size-1]=='p'&&s[size]=='i')
  {
      string s1=st+"3.14";
      return s1;
  }
  if(s[size-1]=='i'&&s[size-2]=='p')
  return st;
  return st+s[size-1]; 
}
int main()
{
string s="piisdfgpi";
cout<<Replace(s,8);

    return 0;
}