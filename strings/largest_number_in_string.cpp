#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    // or sort(s.begin(),s.end(),greater<int>()); s[0];
    int n =s.size();
    cout<<s[n-1];

    return 0;

}