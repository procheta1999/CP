#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int Q;
    vector<vector<int>> Queries;
    vector<int> results;
    vector<int> elements;
    cout<<"Enter range: ";
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int option;
        int input;
        cin>>option>>input;
        vector<int> sub;
        sub.push_back(option);
        sub.push_back(input);
        Queries.push_back(sub);
    }
    
    for(int i=0;i<Q;i++)
    {
        if(Queries[i][0]==1)
        {
          elements.push_back(Queries[i][1]);
        }
        else if(Queries[i][0]==2)
        {
           
           for(int j=0;j<elements.size();j++)
           {
               elements[j]=elements[j]^Queries[i][1];
           }
        }
    }
    std::sort(elements.begin(),elements.end());
    for(int i=0;i<elements.size();i++)
    {
        cout<<elements[i]<<" ";
    }
    cout<<endl;
}