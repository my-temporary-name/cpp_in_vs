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

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Key is at index: "<<i<<endl;
            break;
        }
    }


    return 0;

}