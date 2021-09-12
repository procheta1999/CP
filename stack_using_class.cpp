//stack using linked list using class
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

};
int main()
{
    Node *head=0;
    int element;
    while (true)
    {
        cout<<"Enter element or 0"<<endl;
        cin>>element;
        if(element==0)
        {
            Node *temp;
            temp=head;
            while(temp!=0)
            {
                cout<<temp->data <<endl;
                temp=temp->next;
            }
        }
        else
        {
            Node *newnode;
            newnode=new Node();
            newnode->data=element;
            newnode->next=head;
            head=newnode;
        }
    }
    return 0;

}