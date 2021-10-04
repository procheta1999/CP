#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    vector <string> match;
    int n;
    cout<<"include range:";
    cin>>n;
    cout<<"include options:";
    for(int i=0;i<n;i++)
    {
        string el;
        cin>>el;
        match.push_back(el);
    }
    cout<<"input string: ";
    cin>>s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(match[i]+match[j]==s)
            {
                cout<<"true"<<endl;
                return 0;
            }
        }
    }
}