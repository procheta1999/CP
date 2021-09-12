
//design a stack that supports retriving the min element in o(1)

#include <iostream>
#include <bits/stdc++.h>
#define N 5
#define M 5
using namespace std;
int main()
{
    int stack1[N], stack2[M],top1=-1,top2=-1;
    cout<<"enter elements:"<<endl;
    while(top1 !=N-1)
    {
        int element;
        cin>>element;
        top1=top1+1;
        stack1[top1]=element;
        
        if(top1==0 || element<stack2[top2])
        {
          top2=top2+1;  
            stack2[top2]=element;
        }
        else{
            
                top2=top2+1;
                stack2[top2]=stack2[top2-1];
            
        }
    }
    for(int i=N-1;i>=0;i--)
    {
        cout<<"Upto stack size "<<i<<" min element is "<<stack2[i]<<endl;
    }
    while(top2!=-1)
    {
        cout<<stack2[top2]<<endl;
        top2=top2-1;
    }
    return 0;
}