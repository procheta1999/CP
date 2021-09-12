//sort a stack using recursion
//only the main functions
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort(int stack[5],int top)
{
    if(top==-1)
    {
        return;
    }
    int temp;
    temp=stack[top];
    top=top-1;
    sort(stack,top);
    sortedInsert(stack,top,temp);

}
void sortedInsert(int stack[5],int top,int temp)
{
    if (top==-1 or temp>stack[top])
    {
        top=top+1;
        stack[top]=temp;
    }
    else{
        int el;
        el=stack[top];
        top=top-1;
        sortedInsert(stack,top,temp);
        top=top+1;
        stack[top]=el;
    }
}