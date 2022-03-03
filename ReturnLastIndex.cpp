#include<iostream>
using namespace std;
int ReturnLastidx(int arr[],int size,int x)
{
    if(size==1)
    {
        if(arr[0]==x)
        return 0;
        else return -1;
    }
    int r= ReturnLastidx(arr+1,size-1,x);
    if(r>=0)
    return r+1;
    else
    {
        if(arr[0]==x)
        return 0;
        else
         return -1;
    }
}
int main()
{
    int arr[]={1,4,3,6,5,7,9,1,5,6,3,2};
    cout<<ReturnLastidx(arr,12,7);
    return 0;
}