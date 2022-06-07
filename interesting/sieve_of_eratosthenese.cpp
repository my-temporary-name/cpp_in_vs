//to find prime number
#include<iostream>
using namespace std;

void primesieve(int n)
{
    int prime[100]={0};
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    primesieve(n);
    return 0;

}