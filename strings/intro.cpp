#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{   /*
    string r;
    getline(cin,r);
    cout<<"\nWith space: "<<r;
    string s;
    //input output
    cout<<"\nEnter string: ";
    cin>>s;
    cout<<"\nString is: ";
    cout<<s;
    string p(5,'A');
    //particular char repeat
    cout<<"\n5 times A: "<<p;   

    string s1="fam",s2="ily";
    cout<<s1+s2<<endl;
    s1.append(s2);
    cout<<s1;   

    string abc="asdadafsndvbsnvkjs";
    cout<<"\n"<<abc<<endl;
    abc.clear();
    cout<<abc<<endl;        

    string ss1="abc",ss2="abc";
    if(ss1.compare(ss2)==0)
    {
        cout<<"Equal"<<endl;
    }

    if(!ss1.empty())
    {
        cout<<"SS1 not empty"<<endl;
    }       

    string d="Ankityadav";

    d.insert(2," iss ");
    cout<<d<<endl;

 
   cout<< d.find("yad")<<endl;


    d.erase(4,2);
    cout<<d<<endl;      

    string e="Ankityadav";
    cout<<e.substr(5,3)<<endl;  

    //String to int

    string num="786";
    cout<<stoi(num)+2<<endl;
    int num1=786;
    cout<<to_string(num1) + "2" <<endl;     */

    //to sort string , use headerfile algorithm

    string f="Ankit yadav";
    sort(f.begin(),f.end());
    cout<<f<<endl;


    return 0;
}