#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr,int l,int h,int k)
{
   int mid;
   while(l<=h)
   {
       mid=(l+h)/2;
       if(arr[mid]==k)
       {
           return 1;
       }
       else if(k<arr[mid])
       {
           l=mid+1;
       }
       else{
           h=mid-1;
       }
   }
   return -1;
}
int main()
{
    int n,k;
    vector<int> arr;
    cout<<"enter n & k ";
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int el;
        cin>>el;
        arr.push_back(el);
    }
    for(int i=0;i<n;i++)
    {
        int status=binarySearch(arr,0,n-1,k-arr[i]);
        if(status==1)
        {
            cout<<arr[i]<<" , "<<k-arr[i]<<endl;
            
        }
        return 0;
    }
}