//sort a stack using another stack
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int stack1[5],stack2[5],top1=-1,top2=-1;
    while(top1 != 4)
    {
        int item;
        cout<<"enter element"<<endl;
        cin>>item;
        top1=top1+1;
        stack1[top1]=item;
    }
    while(top1!=-1)
    {
        int temp;
        temp=stack1[top1];
        top1=top1-1;
        while(top2!=-1 && temp<stack2[top2])
        {
            int el;
            el=stack2[top2];
            top2=top2-1;
            top1=top1+1;
            stack1[top1]=el;
        }
        top2=top2+1;
        stack2[top2]=temp;
    }
    for(int i=4;i>=0;i--)
    {
        cout<<stack2[i]<<endl;
    }
    return 0;
}
