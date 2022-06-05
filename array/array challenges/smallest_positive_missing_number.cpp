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

int count=0,num=0;

while(count==num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==count)
        {
            count++;
            break;
        }
    }

    num++;
}

cout<<"Smallest number mising is: "<<num-1;
    return 0;

}