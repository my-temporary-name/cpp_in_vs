/*subarrays is continuous part of array ( nC2 + n)

eg: 1 2 3 4 5 6, subarray is: 3 4 5

subsequence is ordered but not continuous(2^n)
eg: 1 2 3 4 5 6, subsequence is: 2 4 5 

every subarray is subsquence but not vice versa
 (subsequence(subarray))
*/

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
    int sum=0;
    for(int j=i;j<n;j++)
    {
        sum+=arr[j];
        cout<<"Sum from "<<i<<" to "<<j<<" is "<<" : "<<sum<<endl;
    }
    cout<<endl;
}
    return 0;
}
