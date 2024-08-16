#include <iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node *prev;
};
node* inserting(node*head,int d)

   {  node *new_n=new node();
     new_n->data=d;
     new_n->next=head;
     new_n->prev=NULL;
     return new_n;
}
void deleting(node*head)
{
    node *curr=head;
    while(curr->next->next!=NULL)
        {
            curr=curr->next;
        }
    node *t=curr->next;
    curr->next=NULL;
    delete t;
}
void print(node*head)
{
     node *curr= head;
     while(curr!=NULL)
        {
            cout<<curr->data; curr=curr->next;
        }
}
int main()
{
    node *head=NULL;

  head=inserting(head,7);
    head=inserting(head,4);
    head=inserting(head,6);
    head=inserting(head,3);
    head=inserting(head,9);
    head=inserting(head,9);
    head=inserting(head,9);
      print(head);

cout<<endl<<"after deleting:"; deleting(head);
return 0;
}

