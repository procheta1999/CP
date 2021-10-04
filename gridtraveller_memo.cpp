// finding posiible ways of a m x n grid traveller to reach from top left to bottom right by only moving in down and right direction at a time
// time complexity: O(m*n)
#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int gridTravel(int m,int n,map <string,int> coordinates={})
{
    string s=m+" , "+n;
    if(coordinates.find(s)!=coordinates.end())
    {
        return coordinates[s];
    }
    if(m==1 && n==1)
    {
        return 1;
    }
    if(m==0 || n==0)
    {
        return 0;
    }
    coordinates[s]=gridTravel(m-1,n,coordinates) + gridTravel(m,n-1,coordinates);
    return coordinates[s];
}
int main()
{
    int m,n;
    cout<<"enter m & n"<<endl;
    cin>>m>>n;
    int result=gridTravel(m,n);
    cout<<result<<endl;
    return 0;
}