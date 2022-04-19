#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    string s;
    cin>>s;
      int l = s.length();
    int ans = l;
    for(int i=0;i<l-1;i++)
    {
        int ar[26]={0};
        int t= s[i]-'a';
        ar[t]++;
        for(int j=i+1;j<l;j++)
        {
           int x= s[i]-'a';
           ar[x++];
           if(ar[x]<=1)
           ans++;
           else
           break;
        }
    }
    cout<<ans;
    return 0;
  
}