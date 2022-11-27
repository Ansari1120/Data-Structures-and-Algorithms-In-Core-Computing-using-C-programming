#include<iostream>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
void BinarySearchTreeIntoSortedDoublyLinkedList(node **head,node *root){
	if(root==NULL)
	return;
	
	static node *prev=NULL;
	
	BinarySearchTreeIntoSortedDoublyLinkedList(head,root->left);
	
	if(prev==NULL){
		*head=root;
	}
	else{
		root->left=prev;
		prev->right=root;
	}
	prev=root;
		BinarySearchTreeIntoSortedDoublyLinkedList(head,root->right);

}
node *newnode(int data){
	node* new_node = new node;
	new_node->data=data;
	new_node->left=new_node->right=NULL;
	return(new_node);
}
void printlist(node *node){
	while(node!=NULL){
		cout<<node->data<<" <--";
		node=node->right;
	}
}
int main(){
	node *root=newnode(11);
	root->left=newnode(9);
	root->right=newnode(21);
	root->left->right=newnode(10);
	root->right->left=newnode(17);
	
	node* head=NULL;
	BinarySearchTreeIntoSortedDoublyLinkedList(&head,root);
	printlist(head);
	return 0;
}
