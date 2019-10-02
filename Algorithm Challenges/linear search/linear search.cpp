#include<iostream>
using namespace std;

int main()
{
     int a[100],size,n,i;
     cout<<"\n enter size of array";
     cin>>size;
     cout<<"\n enter the array elements";
     for(int i=0;i<size;i++)
     {
        cin>>a[i];        
     }
     cout<<"\n enter the element you want to search";
     cin>>n;
     for(i=0;i<size;i++)
     {
        if(a[i]==n)
        {
            cout<<"\n element found at pos:= "<<i+1;
            break;
        }
     }
     if(i==size)
     {
          cout<<"\n element not found";
     }
    return 0; 
}
