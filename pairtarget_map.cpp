#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter n ";
    cin>>n;
    cout<<"enter k";
    cin>>k;
    vector<int> arr;
    map<int,bool> pairMap;
    for(int i=0;i<n;i++)
    {
        int el;
        cin>>el;
        arr.push_back(el);
    }
    for(int i=0;i<n;i++)
    {
      if(pairMap.find(arr[i])==pairMap.end())
      {
          pairMap[k-arr[i]]=true;
      }
      else
      {
          cout<<arr[i]<<" , "<<k-arr[i]<<endl;
          return 0;
      }
    }
}