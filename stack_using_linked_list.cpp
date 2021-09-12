
//stack using linked list using struct

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head=0;
    int element;
    while (true)
    {
        cout<<"Enter element or 0"<<endl;
        cin>>element;
        if(element==0)
        {
            struct node *temp;
            temp=head;
            while(temp!=0)
            {
                cout<<temp->data <<endl;
                temp=temp->next;
            }
        }
        else
        {
            struct node *newnode;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=element;
            newnode->next=head;
            head=newnode;
        }
    }
    return 0;
    
}