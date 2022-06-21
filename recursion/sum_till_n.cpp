#include<iostream>
using namespace std;

int summ(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n+summ(n-1);
}

int main()
{
int n;
cout<<"Enter the nth number:  ";
cin>>n;

cout<<summ(n);
return 0;

}