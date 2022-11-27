#include<iostream>   // deletion in Doubly linked list
 
#include<conio.h> 
 
using namespace std; 
 
struct node{ 
 
int data; 
 
struct node *next,*prev; 
 
 
 
}; 
// deletion function 
void Delete_node(struct node** head,node* del){
// if no node exists to delete
if(*head==NULL || del==NULL)
return;
// if delete node is head node
if(*head==del)
*head=del->next;

// if delete node isn't head node
if(del->next != NULL)
del->next->prev=del->prev;     // back value's next is now prev of del node

// if delete node isn't first node 
if(del->prev != NULL)
del->prev->next=del->next;   // back value's prev is now next of del

del=NULL;
return;
}
 
// insert node at the begining 
 
void insert_begin(struct node** head,int new_data){ 
 
struct node* newnode = new node; 
 
 
 
// initialize value to new ndoe 
 
   newnode->data = new_data; 
 
 
 
 
 
// set prev of new node to null & next as head 
 
 
 
newnode->next = (*head); 
 
newnode->prev=NULL; 
 
 
 
if((*head)!=NULL) 
 
(*head)->prev=newnode;   //if list insn't null then the node new added linked with prev of head node 
 
(*head)=newnode; 
 
} 
 
void print_list(struct node* node) { 
 
   struct node* last; 
 
 
 
   while (node != NULL) { 
 
      cout<<node->data<<"<==>"; 
 
      last = node; 
 
      node = node->next; 
 
   } 
 
   if(node == NULL) 
 
   cout<<"NULL"; 
 
   } 
int main(){ 
 
struct node* head=NULL; 
 
 
    insert_begin(&head,60); 
     insert_begin(&head,45); 
      insert_begin(&head,1); 
       insert_begin(&head,31); 
        //insert_begin(&head,97); 
        //insert_begin(&head,83); 
 
 
cout<<"doubly linked list before deletion is shown below : "<<endl; 
 
print_list(head); 
 
Delete_node(&head,head); // del head node
Delete_node(&head,head->next); // del middle node
Delete_node(&head,head->next); // del last node
//0Delete_node(&head,head->next); // del last node
 
cout<<"\ndoubly linked list after deletion is shown below : "<<endl; 
 
print_list(head); 
getch(); 
}

