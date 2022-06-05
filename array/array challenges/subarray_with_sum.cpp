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

    cout<<"Enter the sum:";
    int sum;
    cin>>sum;

    
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=i;j<n;j++)
        {
            x+=arr[j];

            if(x==sum)
            {
                cout<<"From "<<i<<" to "<<j<<endl;
            }
        }
    }

    return 0;

}