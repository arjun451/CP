#include<iostream>
using namespace std;
int Returnallidx(int arr[],int size,int b[],int x)
{
    if(size==1)
    {
        if(arr[size-1]==x)
        {
            b[0]=size-1;
            return 1;
                    }
                    return 0;
    }
    int r=Returnallidx(arr,size-1,b,x);
    if(arr[size-1]==x)
    {
        b[r]=size-1 ;
        return r+1;
            }
            else return r;
}
int main()
{
int arr[]={1,5,4,3,5,7,8,5};
int b[8];
int t= Returnallidx(arr,8,b,9);
cout<<t<<endl;
for(int i=0;i<t;i++)
cout<<b[i]<<" ";

    return 0;

}