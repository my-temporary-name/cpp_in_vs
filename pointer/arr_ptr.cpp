#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    int *aptr=arr;
    
    for(int i=0;i<4;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<*aptr<<" ";
        aptr++;
    }


    return 0;
}