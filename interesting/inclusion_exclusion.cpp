// AUB= A + B - AnB
// find mumber divisible by 5 or 7 b/w 1 to 1000;
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int c1,c2,c3;
    c1=n/a;
    c2=n/b;
    c3=n/(a*b);

    cout<<(c1+c2-c3);
    return 0;


}