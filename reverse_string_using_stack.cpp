//reverse a string using stack
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, rev;
    cout<<"string";
    cin>>s;
    int top1=s.size();
    while(top1!=-1)
    {
        string temp;
        temp=s[top1];
        top1=top1-1;
        rev+=temp;

    }
    cout<<rev<<endl;
    return 0;
}