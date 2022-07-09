#include<iostream>
using namespace std;
int StrToInt(string s)
{
    int ans=0;
    int tempAns=0;
    bool IsAllUP=true;
    for(int i=0;i<s.length();i++)
    {
       if(s[i]==' ')
       {
           if(IsAllUP)
           {
            ans+=tempAns*2;
           }
           else
           {
             ans+=tempAns;
           }
          tempAns=0; 
          IsAllUP=true;
       }
       else if(s[i]>='a'&&s[i]<='z')
       {
        IsAllUP=false;
        tempAns+=s[i]-'a'+1;
       }
       else
       {
          tempAns+=s[i]-'A'+1;
       }


    }
   return ans;
}
int main()
{
string s="ABC ABc abc ";
cout<<StrToInt(s);
return 0;
}