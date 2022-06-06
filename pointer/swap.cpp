#include<iostream>
using namespace std;

void swap(int *n,int *m)
{
    int temp= *n;
    *n=*m;
    *m=temp;
}
int main()
{
    int a=10,b=20;

    cout<<"Value of a and b: "<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"Value of a and b: "<<a<<" "<<b;

    return 0;
}