#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string arr;
    cout<<"Enter the setence: ";
    getline(cin,arr);

    //int n=s.size();
    
    int maxm=0;
    int i=0;
    int curn=0;
    while(i<arr.size())
    {
        
       if(arr[i]==' ')
       {
           i++;
           curn=0;
       }
        
        else
        {
            
            i++;
            curn++;
            maxm=max(maxm,curn);
        }
    }

     
        
    cout<<"Largest word is of size: "<<maxm;
        



    
    return 0;
}