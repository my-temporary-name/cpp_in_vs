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

int max_sum=arr[0];
    for(int i=0;i<n;i++)
    {
       
        for(int j=i;j<n;j++)
        {
            cout<<"Subarray from "<<i;
            cout<<" to "<<j<<" is: ";
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
                sum+=arr[k];
                max_sum=max(max_sum,sum);
            }
            cout<<"  Sum is: "<<sum;
            cout<<endl;
        }
        cout<<endl;
    }

cout<<"\n\n"<<" MAx sum is: "<<max_sum;
    return 0;

}