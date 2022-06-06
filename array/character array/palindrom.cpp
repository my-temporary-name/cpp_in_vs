#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cout<<"Enter the word: ";
    cin>>arr;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            cout<<"Not Palindrom";
            return 0;
        }
    }

    cout<<"Palindrom";
    return 0;
}