//circular max sum of subarray

#include<iostream>
using namespace std;

int kaden(int arr[],int n)
{
    int cursum=0,maxm=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cursum+=arr[i];
        if(cursum<0)
        {
            cursum=0;
        }

        maxm=max(maxm,cursum);
    }

    return maxm;
}

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
    cout<<endl;

    int wrapsum,nonwrapsum;
    int totalsum=0;

    nonwrapsum=kaden(arr,n);

    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];

    }

    wrapsum=totalsum+kaden(arr,n);

    cout<<max(wrapsum,nonwrapsum);
    

    return 0;

}