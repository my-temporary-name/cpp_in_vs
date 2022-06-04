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

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    int minimum=arr[0];
    int maximum=arr[0];

    for(int i=0;i<n;i++)
    {
        minimum=min(minimum,arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        maximum=max(maximum,arr[i]);
    }

    cout<<"Minimum: "<<minimum<<" ,Maximum: "<<maximum;

    return 0;
}