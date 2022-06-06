#include<iostream>
using namespace std;
int main()
{
    char arr[6]="Ankit";
    int i=0;
    while(arr[i]!='\0')
    {
        cout<<arr[i]<<" ";
        i++;
    }

    char brr[10];
    cin>>brr;
    cout<<"\n new string is: "<<brr;

    return 0;

}