#include<iostream>
using namespace std;

int power(int n,int p)
{
    if(p==1)
    {
        return n;
    }

    return n*power(n,p-1);
}

int main()
{
int n,p;
cout<<"Enter the n and p number:  ";
cin>>n>>p;

cout<<power(n,p);
return 0;

}