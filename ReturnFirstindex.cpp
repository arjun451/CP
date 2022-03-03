#include<iostream>
using namespace std;
int Firstinx(int arr[],int size,int x)
{
    if(size==1)
    {
        if(arr[0]!=x)
           return -1;
           else
           return 0;        
    }
    else if(arr[0]==x)
       return 0;
       int r= Firstinx(arr+1,size-1,x);
       if(r==-1)
       return -1;
       else
          return r+1;
}
int main()
{
int arr[]={1,5,2,3,4,5,6};
cout<<Firstinx(arr,7,4);

    return 0;

}