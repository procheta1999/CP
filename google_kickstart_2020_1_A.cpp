#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int j=0;j<T;j++)
    {
        // cout<<j+1<<endl;
        int N,K;
        cin>>N>>K;
        string S;
        cin>>S;
        int count=0;
        int limit=N/2;
        limit=limit-1;
        int tempK=0;
        for(int i=limit;i>=0;i--)
        {
          if(S[i]!=S[N-i-1])
          {
            tempK=tempK+1; 
          }
          
          
        }
        if(tempK==K)
        {
            count=0;
        }
        else if(tempK>K)
        {
            count=tempK-K;
        }
        else
        {
            count=K-tempK;
        }
        cout<<"Case #"<<j+1<<": "<<count<<endl;
    }
}