

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

int count=2;
int maxm=count;
for(int i=0;i<n;i++)
{
    if((arr[i+1]-arr[i])==(arr[i+2]-arr[i+1]))
    {
        count++;
        maxm=max(maxm,count);
    }
}

cout<<"Longest subarray is: "<<maxm-1;
    return 0;
}
