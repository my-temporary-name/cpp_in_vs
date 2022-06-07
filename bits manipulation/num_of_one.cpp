#include<iostream>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;

    while(n)
    {
       n=n & (n-1);
        m++;
    }
    cout<<m;
    return 0;
}