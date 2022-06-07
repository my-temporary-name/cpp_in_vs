#include<iostream>
#include<string>
 using namespace std;
 int main()
 {
     string s;
     cin>>s;


    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }

    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;   // a will be 0, b will be 1 and so on...
    }

    int maxm=0;
    char c;
    for(int i=0;i<26;i++)
    {
        maxm=max(maxm,freq[i]);

        if(maxm==freq[i])
        {
            c='a'+i;
        }
    }

    cout<<"letter: "<<c<<" freq: "<<maxm;
    return 0;
 }