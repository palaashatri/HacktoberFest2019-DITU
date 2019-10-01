#include<iostream>
using namespace std;

int main()
{
     int a[100],count=0,sz,n,z;
     cin>>sz;
     for(int i=0;i<sz;i++)
     {
        cin>>a[i];        
     }
     cin>>n;
     for(int i=0;i<sz;i++)
     {
        if(a[i]==n)
        {
            count++;
            z=i;
        }
     }
     if(count==0)
     {
        cout<<"no search found";
     }
     else
     {
        cout<<z+1;
     }
    return 0; 
}
