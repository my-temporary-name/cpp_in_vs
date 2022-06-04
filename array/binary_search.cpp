#include<iostream>
using namespace std;

void binary_search(int key,int arr[],int n)
{
    int low=0,high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==key)
        {
            cout<<"Index of Key is: "<<mid;
            return;
        }

       else if(arr[mid]>key)
        {
            high=mid-1;
        }

        else
        {
            low= mid+1;
        }
    }


}


int main()
{
    int n;

    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
// Array must be sorted for binary search
    cout<<"Enter array values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;
    int key;
    cout<<"Enter the key: ";
    cin>>key;

    binary_search(key,arr,n);



    return 0;

}