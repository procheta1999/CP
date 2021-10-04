// fibonacci using O(2^n) approach
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    int result=fib(n);
    cout<<result<<endl;
    return 0;
}