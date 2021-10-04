#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int fib(int n,map <int,int> m)
{
    if (m.find(n) != m.end())
    {
        return m[n];
    }
    if(n<=2)
    {
        return 1;
    }
    m[n]=fib(n-1,m)+fib(n-2,m);
    return m[n];
}
int main()
{
    map <int,int> nap;
    int n;
    cout<<"enter number:";
    cin>>n;
    int result=fib(n,nap);
    cout<<result<<endl;
    return 0;
}