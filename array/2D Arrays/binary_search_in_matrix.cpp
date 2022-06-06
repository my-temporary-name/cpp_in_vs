//Here elements are arranged in sorted order both rowwise and colmwise

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
   
   
    int row_low=0,row_max=n-1;
    int colm_low=0,colm_max=m-1;
    
    while(row_low<=row_max && colm_low<=colm_max)
    {
        if(arr[row_low][colm_max]==key)
        {
            cout<<"Index of key is: "<<row_low<<" "<<colm_max;
            return 0;
        }

     else if (arr[row_low][colm_max]>key)
        {
            colm_max--;
        }

        else{
            row_low++;
        }
    }



    return 0;

}