//Very nice question
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

    cout<<" Spiral Order traversal of matrix is: ";
    int row_max=n-1,row_low=0,colm_max=m-1,colm_low=0;

    while(row_low<=row_max && colm_low<=colm_max)
    {
        for(int i=colm_low;i<=colm_max;i++)
        {
            cout<<arr[row_low][i]<<" ";
        }
        row_low++;

        for(int i=row_low;i<=row_max;i++)
        {
            cout<<arr[i][colm_max]<<" ";
        }
        --colm_max;

        for(int i=colm_max;i>=colm_low;i--)
        {
            cout<<arr[row_max][i]<<" ";
        }
        row_max--;

        for(int i=row_max;i>=row_low;i--)
        {
            cout<<arr[i][colm_low]<<" ";
        }
        colm_low++;


    }



    return 0;


}