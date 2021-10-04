//brute-force o(n^2) approach
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool found(vector<int> v, int k)
{
for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==k)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> arr;
    int n;
    cout<<"include range: ";
    cin>>n;
    int el;
    for(int i=0;i<n;i++)
    {
        cin>>el;
        arr.push_back(el);

    } 
    int k;
    cout<<"input k: ";
    cin>>k;
    bool status=found(arr,k);
    cout<<"result is: "<<status<<endl;
    return 0;
}