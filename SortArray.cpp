#include<iostream>
using namespace std;
void Sort(int arr[],int size)
{
    if(size==1)
    return ;
    if(arr[0]>arr[1])
    {
        int t= arr[0];arr[0]=arr[1];arr[1]=t;
    }
    Sort(arr,size-1);
}
int main()
{
    int arr[]={3,2,5,8,1,4};
    Sort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}