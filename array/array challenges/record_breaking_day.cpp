

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

    int  maxm=0;
    int count=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            maxm=max(maxm,arr[j]);
        }
        
        cout<<i<<" max is :"<<maxm<<endl;
        
        if(maxm==arr[i] && arr[i]>arr[i+1])
        {
            count++;
        }
        
        cout<<count<<endl;
    }

    for(int j=0;j<n;j++)
        {
            maxm=max(maxm,arr[j]);
        }
        
        cout<< n-1 <<" max is :"<<maxm<<endl;

        if(maxm==arr[n-1])
        {
            count++;
        }

cout<<"Number of record breaking day: "<<count;

    return 0;
}
