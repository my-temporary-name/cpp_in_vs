// write a progrram to find a unique nuber in an array where all number except one are present twice;
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={2,4,6,3,4,6,2};

    int brr[99];

    for(int i=0;i<99;i++)
    {
        brr[i]=-1;
    }

    for(int i=0;i<7;i++)
    {
        brr[arr[i]]++;
    }

    for(int i=0;i<99;i++)
    {
        if(brr[i]==0)
        {
            cout<<"Unique number is: "<<i;
            return 0;
        }
    }
                return 0;

}
*/

#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[7]={2,4,6,3,4,6,2};
    cout<<unique(arr,7)<<endl;
    return 0;
}


