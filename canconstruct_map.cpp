#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    string s;
    vector <string> match;
    map <string,bool> memo;
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
     if(s.find(match[i])==0)
    {
      if(memo.find(match[i])==memo.end())
        {
            string sample=s.substr(match[i].size());
            memo[sample]=true;
        }
    }
    else if(memo.find(match[i])!=memo.end())
    {
        cout<<"true"<<endl;
        return 0;
    }
        
    }
}