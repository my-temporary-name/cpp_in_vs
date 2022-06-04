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

   
    int maximum=arr[0];

    cout<<endl;

    for(int i=0;i<n;i++)
    {
        maximum=max(maximum,arr[i]);
        cout<<"Maximum till "<<i<<" is : "<<maximum<<endl;
    }

    

    return 0;
}