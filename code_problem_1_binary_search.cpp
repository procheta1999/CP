//hashing o(n) approach
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;
int binarySearch(vector<int> v,int l, int r, int k)
{
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==k)
        {
            return mid;
        }
        else if(k<v[mid])
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
       

    }
     return -1;
}
int subPair(vector<int> v,int s, int e, int k)
{
for(int i=s;i<e;i++)
    {
        int status=binarySearch(v,0,e-1,k-v[i]);
        if(status != -1)
    {
        return 1;
    }
        
    }
    return -1;
    
}
int main()
{
    vector<int> arr;
    map<int,bool> m;
    int n;
    cout<<"include range: ";
    cin>>n;
    int el;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>el;
        arr.push_back(el);

    } 
    int k;
    cout<<"input k: ";
    cin>>k;
    sort(arr.begin(),arr.end());
    int status;
    status=subPair(arr,0,n,k);
    cout<<status<<endl;
    
    
    // cout<<"result is: "<<status<<endl;
    return 0;
}