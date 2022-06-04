// selection sort always place smallest element at its right place in every iteration

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
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"Sorted array is: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}