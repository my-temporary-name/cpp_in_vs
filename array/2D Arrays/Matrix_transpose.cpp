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

    cout<<"Transpose of matrix is: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;

}