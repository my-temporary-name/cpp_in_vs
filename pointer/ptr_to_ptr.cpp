#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    int **q;
    p=&a;
    q=&p;
    cout<<a<<" "<<p<<" "<<*p<<" "<<q<<" "<<*q<<" "<<**q;

    return 0;
}