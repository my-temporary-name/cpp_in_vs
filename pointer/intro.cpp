#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr;
    aptr=&a;

    cout<<"Value of a: "<<a<<endl;
    cout<<"value of a pointer: "<<aptr<<endl;
    cout<<"value of *aptr: "<<*aptr<<endl;

    *aptr=20;
    cout<<"New value of a is: "<<a<<endl;

    return 0;
}