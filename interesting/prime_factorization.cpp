#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n]={0};

    for(int i=2;i<(n);i++)
    {   
        if(n%i==0)
        {
            arr[i]=1;
        }


    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(j%i==0)
                {
                    arr[j]=0;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}