#include<iostream>
#include<conio.h>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
};
Node* Initially_Nodes(int data){
	Node *temp = new Node;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void Pre_Order(Node *node){
	if(node==NULL)
	return;
	cout<<node->data<<" <-- , ";
	Pre_Order(node->left);
	Pre_Order(node->right);
}
void In_Order(Node *node){
	if(node==NULL)
	return;
	Pre_Order(node->left);
	cout<<node->data<<" <-- , ";
	Pre_Order(node->right);
}
void Post_Order(Node *node){
		if(node==NULL)
	return;
	Pre_Order(node->left);
	Pre_Order(node->right);
	cout<<node->data<<" <-- , ";
}
int main(){
	Node *root = Initially_Nodes(2);
	root->left = Initially_Nodes(1);
	root->right = Initially_Nodes(4);
	root->right->left=Initially_Nodes(3);
	root->right->right=Initially_Nodes(5);
	
	cout<<"\n Pre Order Traversal "<<endl;
	Pre_Order(root);
	cout<<"\n In Order Traversal "<<endl;
	In_Order(root);
	cout<<"\n Post Order Traversal "<<endl;
	Post_Order(root);
	getch();
}
