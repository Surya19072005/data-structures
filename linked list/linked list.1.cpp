#include <iostream>
 using namespace std;
class node{
public: int data;
node *next;
};
node* inserting(node*head,int d){ node *new_n=new node();
new_n->data=d;
new_n->next=head;
return new_n;
}
void deleting(node*head)
{ node *curr=head;
while(curr->next->next!=NULL)
{ curr=curr->next;
}
node *t=curr->next; curr->next=NULL;
 delete t;
}
void print(node*head)
{ node *curr= head; while(curr!=NULL){
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
 head=inserting(head,9); cout<<"Printing the linked list:";
 print(head);
cout<<endl<<"Deleting the last element:"; deleting(head);
print(head);
return 0;
}

