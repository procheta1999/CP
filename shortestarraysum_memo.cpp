// O(m^2 * n) approach recursion with memo
// shortest array to reach the target sum, numbers can be duplicated
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;
vector <int> arraySum(vector<int> arr, int k, map<int,vector<int>> memo={})
{
    if(memo.find(k)!=memo.end())
    {
        return memo[k];
    }
    if(k==0)
    {
        return {0};
    }
    if(k<0)
    {
        return {0};
    }
    vector<int> shortestCombination={0};
    for(int i=0;i<arr.size();i++)
    {
        int remainder=k-arr[i];
        vector<int> combinationRemainder;
        combinationRemainder=arraySum(arr,remainder);
        if(combinationRemainder.size()!=0)
        {
            combinationRemainder.push_back(arr[i]);
            if(shortestCombination.size()==1 || combinationRemainder.size()<shortestCombination.size())
            {
                shortestCombination=combinationRemainder;
            }
        }

    }
    memo[k]=shortestCombination;
    return shortestCombination;

}
int main()
{
    int n,k;
    vector<int> arr;
    cout<<"enter n & k "<<endl;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int el;
        cin>>el;
        arr.push_back(el);
    }
    vector<int> result={};
    result=arraySum(arr,k);
    for(int i=1;i<result.size();i++)
    {
        cout<<"result: "<<result[i]<<endl;
    }
    return 0;
}