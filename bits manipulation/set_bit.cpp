#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
    return ((n | (1<<pos)));
}

int main()
{
    cout<<getbit(5,1);
    return 0;
}