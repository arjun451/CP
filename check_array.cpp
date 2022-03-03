#include<iostream>
using namespace std;
bool arraySort(int arr[],int size)
{
    if(size==1)
    return true;
     else if(arr[0]>arr[1])
     return false;
    arraySort(arr+1,size-1);
    
}
int main()
{
int arr[]={2,3,4,5,6,1};
cout<<arraySort(arr,6);
    return 0;
}