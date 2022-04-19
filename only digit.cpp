#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s,ans="";
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=48&&s[i]<=57)
        ans+=s[i];
    }
  cout<<ans;





    return 0;
}