//hashing o(n) approach
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;
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
    for(int i=0;i<n;i++)
    {
        if(m.find(k-arr[i])==m.end())
        {
            m[arr[i]]=true;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    // cout<<"result is: "<<status<<endl;
    return 0;
}