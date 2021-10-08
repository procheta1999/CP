#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    vector <int> arr;
    cout<<"enter range: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        arr.push_back(x);
        arr.push_back(y);
    }
    int m,c;
    bool flag=false;
    m=(arr[3]-arr[1])/(arr[2]-arr[0]);
    c=arr[1]-(m*arr[0]);
    cout<<m<<endl;
    for (int i=4;i<arr.size();i=i+2)
    {
        if(arr[i+1]!=m*arr[i]+c)
        {
           cout<<"false"<<endl;
           return 0;
        }
        else
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        cout<<arr[0]<<"y-"<<arr[1]<<"x="<<c;
    }
    return 0;

}