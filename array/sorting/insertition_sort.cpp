// keep on sorting elements on LHS of key and move till last element

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
   

for(int i=1;i<n;i++)
{
    int current =arr[i];
    int j=i-1;

    while(j>=0 && arr[j]>current)
    {
        arr[j+1]=arr[j];
        j--;
    }

    arr[j+1]=current;
}

    cout<<"Sorted array is: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}