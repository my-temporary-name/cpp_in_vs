// Gives max sum of subarray in O(n) time , in single loop

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
    cout<<endl;

    int cursum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cursum+=arr[i];

        if(cursum<0)
        {
            cursum=0;
        }
        maxsum=max(maxsum,cursum);
    }

    cout<<"Max sum: "<<maxsum;

    return 0;

}