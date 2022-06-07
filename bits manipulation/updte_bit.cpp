#include<iostream>
using namespace std;
int updte(int n,int pos,int val)
{
     n=(n & ~(1<<pos));
     return (n| (val<<pos));
}

int main()
{
    cout<<updte(5,1,1);
    return 0;
}