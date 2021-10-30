#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int Q;
    vector<vector<int>> Queries;
    vector<int> results={0};
    vector<int> points;
    cout<<"Enter range: ";
    cin>>Q;
    int dist, prevDist;
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
           points.push_back(Queries[i][1]);
        }
        else if(Queries[i][0]==2)
        {
            vector<int>::iterator pos;
            pos=points.begin()+(Queries[i][1]-1);
            points.erase(pos);
        }
        else if(Queries[i][0]==3)
        {
            for(int j=0;j<points.size();j++)
            {
                dist=abs(points[j]-Queries[i][1]);
                if(j==0)
                {
                    prevDist=dist;
                }
                else
                {
                    if(dist>prevDist)
                    {
                        prevDist=dist;
                    }
                }
            }
            results.push_back(prevDist);
        }
    }
    cout<<"Results"<<endl;
    for(int k=1;k<results.size();k++)
    {
        cout<<results[k]<<endl;
    }
}