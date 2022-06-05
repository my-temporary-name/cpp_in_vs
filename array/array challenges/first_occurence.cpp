
//very nice question uses -1 array;
#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter size: ";
    cin>>n;
    int arr[n];

    cout<<"Enter array values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
cout<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

int m=0;

    for(int i=0;i<n;i++)
    {
        m=max(m,arr[i]);
    }
int brr[m];
    for(int i=0;i<m;i++)
    {
        brr[i]=-1;
    }
int minindx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(brr[arr[i]]!=-1)
        {
            minindx=min(minindx,brr[arr[i]]);

        }

        else{
            brr[arr[i]]=i;
        }
    }

    if(minindx==INT_MAX)
    {
        cout<<"-1";
    }
    else{
        cout<<minindx+1<<endl;
    }

    return 0;
}
