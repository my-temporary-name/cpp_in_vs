//gcd is hcf
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mult=a*b;

    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    cout<<"GCD/HCF is: "<<a;

    int lcm=(mult)/a;
    cout<<"\nLCM is: "<<lcm;



    return 0;


}