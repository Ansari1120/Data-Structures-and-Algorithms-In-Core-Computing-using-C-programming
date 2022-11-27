#include<iostream>
using namespace std;
class Stacknode{
	public :
	int data;
	Stacknode* next;
};
Stacknode* newnode(int data){
	Stacknode* stacknode=new Stacknode();
	stacknode->data=data;
	stacknode->next=NULL;
	return stacknode;
}
int IsEmpty(Stacknode* root){
	return !root;
}
void Push(Stacknode** root,int data ){
	Stacknode* stacknode = newnode(data);
	stacknode->next=*root;
	*root=stacknode;
	cout<<data<<" pushed into Stack\n";
}
int pop(Stacknode** root){
	if(IsEmpty(*root))
	return INT_MIN;
	Stacknode* temp = *root;
	*root=(*root)->next;
	int popped = temp->data;
	temp=NULL;
	return popped;
}
int peek(Stacknode* root){
	if(IsEmpty(root))
	return INT_MIN;
	return root->data;
}
int main(){
	Stacknode* root=NULL;
	
	
	Push(&root,31);
		Push(&root,54);
			Push(&root,58);
				Push(&root,49);
	cout<<pop(&root)<<" Poped out from stack\n";
	cout<<"Top Element in stack is : \n"<<peek(root)<<endl;
	cout<<"Elements in the stack were : \n";
	while(!IsEmpty(root)){
		cout<<peek(root)<<" ";
		pop(&root);
	}
	return 0;
}
