#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of steps: ";
    cin>>n;
    int count=0;
    while(n!=0)
    {
      if(n%2==0)
      {
          count=count+1;
          int k=n/2;
          n=n-k;
          
      }
      else{
          count=count+1;
          n=n-1;
          
      }
    }
    cout<<count<<endl;
    return 0;
}