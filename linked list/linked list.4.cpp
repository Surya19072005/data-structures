#include <iostream>
using namespace std;
class node{
public:
    string data;
    node *next;
    node *prev;
};
node* inserting(node*head,string d){
    node *new_n=new node();
new_n->data=d;
new_n->next=head;
new_n->prev=NULL;
return new_n;
}
void print(node*head){
     node *curr= head;
     while(curr!=NULL){
cout<<curr->data;
curr=curr->next;
}
}
node *reverse(node*head){
    if(head != NULL)
{
node* prevNode = head;
node* tempNode = head;
node* curNode = head->next;
prevNode->next = NULL;
prevNode->prev = NULL;
while(curNode != NULL) {
tempNode = curNode->next;
curNode->next = prevNode;
prevNode->prev = curNode;
prevNode = curNode;
curNode = tempNode;
}
head = prevNode;
}
return head;
}
int main()
{
node *head=NULL;
head=inserting(head,"Hi");
head=inserting(head,"fr");
head=inserting(head,"gt");
head=inserting(head,"ht");
 head=inserting(head,"dt");
 print(head); cout<<endl<<"Reverse:";
 head=reverse(head); print(head);
return 0;
}
