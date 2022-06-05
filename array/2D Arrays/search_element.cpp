#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter row & Colmn of matrix: ";
    cin>>n>>m;

    int arr[n][m];

    cout<<" enter elements of matrix: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<" matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int key;
    cout<<"Enter element to be searched: ";
    cin>>key;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"Index of Keys is: "<<i<<" "<<j;
                break;
            }
        }
    }



    return 0;

}