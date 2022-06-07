#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
    int mask=~(1<<pos);
    return (n & mask);
}

int main()
{
    cout<<getbit(5,2);
    return 0;
}