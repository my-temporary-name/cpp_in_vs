#include<vector>
#include<iostream>

using namespace std;
int main()
{
    //push_back(" ") is use to insert at end in vector

    vector<string> a;
    a.push_back("Ankit");
    a.push_back("Yadav");
    a.push_back("is");
    a.push_back("Good");

    cout<<"Size of vector a is: "<< a.size()<<endl;

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;

// pop_back() is used for poping last element
    a.pop_back();

     for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;
        cout<<"Size of vector a is: "<< a.size()<<endl;

    return 0;
}