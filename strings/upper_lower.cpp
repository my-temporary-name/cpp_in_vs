/*

direct funcn: transform(s.begin(),s.end(),s.begin(),::toupper)

transform(s.begin(),s.end(),s.begin(),::tolower)


*/

#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n =s.size();
    cout<<"String to upper: ";
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        
    }

    cout<<s<<endl;

    cout<<"String to lower: ";
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        
    }

    cout<<s;
    return 0;

}