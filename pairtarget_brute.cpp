#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n,k;
    vector <int> arr;
    cout<<"enter n";
    cin>>n;
    cout<<"enter k";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        int el;
        cin>>el;
        arr.push_back(el);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<arr[i]<<" , "<<arr[j]<<endl;
                return 0;
            }
        }
    }
    
}