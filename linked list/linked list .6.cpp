#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node * next;
};
Node * addfirst(Node * head,int ins_data)
{
    Node * curr=head
  Node * newnode = new Node();
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    newnode->data=ins_data;
    newnode->next=head;
    curr->next=newnode;
    head=newnode;
    return head;
}
Node * addlast(Node * head,int ins_data)
{
    Node * curr=head;
    Node * newnode1 = new Node();
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    newnode1->data=ins_data;
    newnode1->next=head;
    curr->next=newnode1;
    return head;
}
Node * addnthpos(Node * head,int pos,int ins_data)
{
    Node * curr=head;
    Node * newnode1 = new Node();
    for(int i=1;i<pos-1;i++)
    {
        curr=curr->next;
    }
    newnode1->data=ins_data;
    newnode1->next=curr->next;
    curr->next=newnode1;
    return head;
}
int main()
{
    Node * head = new Node();
    Node * fir = new Node();
    Node * sec = new Node();

    head->data=1;
    head->next=fir;
    fir->data=2;
    fir->next=sec;
    sec->data=3;
    sec->next=head;
    head=addfirst(head,5);
    head=addlast(head,9);
    head=addnthpos(head,2,4);
    Node * temp=head;
    if(head!=NULL)
    {
        do
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
    }

}
