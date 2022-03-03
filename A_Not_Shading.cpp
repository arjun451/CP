 // Header Files
#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list> 
#include<iterator>
#include<deque>  
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<chrono>
#include<cstring>
#include<string>
// Header Files End  
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fo_(i,a) for(int i=a;i>=0;i--)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef priority_queue <int> mxpq;
typedef priority_queue<int,vector<int>,greater<int> >mipq;
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define inf 9999999999999
#define endl '\n'
const ll mod1=998244353;
const ll mod=1e9+7;
ll gcd(ll a,ll b){ if (b==0) return a;return gcd(b,a%b);}
ll pwr(ll a, ll b) {a %= mod; ll res = 1;while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;}return res;}
ll binarySearch(ll arr[], ll l, ll r, ll x)
{
    if (r >= l) {
        ll mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
// ll nCr(ll n,ll r)
//    {
//     if(n-r<r)
//         r=n-r;
//     ll m=1;
//     fo(i,2,r+1)
//     m*=i;
//     ll m1=1;
//     for(int i=n;i>n-r;i--)
//         m1*=i;
//     return m1/m;
//    }
int main() {
    
     
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
       string a,b;
       cin>>a>>b;
       int a1=0,b1=0;
       fo(i,0,a.length())
       {
           if(a[i]=='0')
           a1++;
       }  fo(i,0,b.length())
       {
           if(b[i]=='0')
           b1++;
       }
       int i=0,j=0,s=0;
       while(i<n&&j<n)
       {
           if(a[i]=='0')
           {
             a1--;
             i++;
           }
           else if(b[j]=='0')
           {
               b1--;
               j++;

           }
           else if(a[i]=='1'&&b[j]=='1')
           {
               if(a1>b1)
               {
                   s+=a1+b1;
                   i++;
               }
               else if(a1==b1)
               {
                   if(i>j)
                   {
                       s+=a1+b1;
                   i++; 
                   }
                   else
                   {
                        s+=a1+b1;
                   j++;
                   }
               }
               else
               {
                   s+=a1+b1;
                   j++;
               }
           }
       }
       if(i<n-1)
       {
         while(i<n-1)
         {
             if(a[i]=='1')
             {
                 s+=a1+b1;
             }
             i++;
         }
       }
       if(j<n-1)
       {
         while(j<n-1)
         {
             if(b[j]=='1')
             {
                 s+=a1+b1;
             }
             j++;
         }
       }
       cout<<s<<endl;
     }

  return 0;
}