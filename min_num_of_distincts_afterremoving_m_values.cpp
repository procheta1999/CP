// logic: to cout minimum number of distinct values after m removals, remove the elements from the array which appear in the array times less than or equal to m
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;
int main()
{
   int n,m;
   int count=0;
   vector<int> arr;
   vector<pair<int,int>> v;
   map<int,int> memo;
   cout<<"enter n ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int el;
       cout<<"element 1: ";
       cin>>el;
       arr.push_back(el);
   }
   cout<<"enter m ";
   cin>>m;
   for(int i=0;i<n;i++)
   {
       memo[arr[i]]=memo[arr[i]]+1;
   }
   for(auto j=memo.begin();j!=memo.end();j++)
   {
      v.push_back(make_pair(j->second,j->first));
   }
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
   {
       if(v[i].first<=m)
       {
           m=m-v[i].first;
           count++;
       }
       else{
           cout<<v.size()-count<<endl;
           return 0;
       }
      
   }
   cout<<v.size()-count<<endl;
   return 0;
}