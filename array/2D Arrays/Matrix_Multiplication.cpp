#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter row & Colmn of matrix 1 : ";
    cin>>n>>m;

    int arr[n][m];

    cout<<" enter elements of matrix 1: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<" matrix 1 is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int p,q;
    cout<<"Enter row & Colmn of matrix 2 : ";
    cin>>p>>q;

int brr[p][q];
    cout<<" enter elements of matrix 2 : ";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>brr[i][j];
        }
    }

    cout<<" matrix 2 is: "<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

int crr[n][q];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            crr[i][j]=0;
        }
    }

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<m;k++)
            {
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }

    cout<<"Matrix multiplication of matrix 1 and matrix 2 is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    

        return 0;


}