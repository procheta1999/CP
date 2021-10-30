#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int N,M,Q;
    vector<string> dict;
    vector<string> queries;
    map<string,int> m;
    cout<<"Enter word count and length of each word in dictionary"<<endl;
    cin>>N>>M;
    cout<<"Enter words for dictionary"<<endl;
    for(int i=0;i<N;i++)
    {
        string word;
        cin>>word;
        dict.push_back(word);
    }
    cout<<"Enter Queries and Query words:"<<endl;
    cin>>Q;
for(int i=0;i<Q;i++)
    {
        string query;
        cin>>query;
        queries.push_back(query);
    }
    for(int k=0;k<Q;k++)
    {
        string prevString=queries[k];
        queries[k].erase(remove(queries[k].begin(), queries[k].end(), '?'), queries[k].end());
        int pos=prevString.find(queries[k]);
        // cout<<pos<<endl;
        for(int j=0;j<N;j++)
        {
            string subWord=dict[j].substr(pos);
            int position;
            if((position = dict[j].find(queries[k], pos)) != string::npos)
            {
               m[queries[k]]=m[queries[k]]+1;
            }
        }
    }
    for(int i=0;i<Q;i++)
    {
        cout<<m[queries[i]]<<endl;
    }
}