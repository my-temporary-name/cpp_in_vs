#include<iostream>
using namespace std;

int fib(int n,int a,int b)
{
    
        int temp=a+b;


    cout<<temp<<" ";
    b=a;
    a=temp;
    if(n>1){
    return fib(n-1,a,b);
    }
}

int main()
{
int n,a=0,b=1;
cout<<"Enter the nth number:  ";
cin>>n;
cout<<"\nFibonnaci series is: ";
cout<<" 0 "; 

fib(n,a,b);
return 0;

}