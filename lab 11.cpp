#include<iostream>
#include<conio.h>
using namespace std;
class node{
	public :
	int data;
	node *left,*right;
};

void print_current_level(node* root,int level); // print level of the present node
int height(node* node);       // took hieght of the node
node* newnode(int data);      // took data of the node entered to print its level


void print_level_order(node* root){
	int h=height(root);
	int i;
	for(int i=0;i<=h;i++)
print_current_level(root,i);

}
void print_current_level(node* root,int level){
	if(root==NULL){
		return;
	}
	if(level==1){
		cout<<root->data<<" "<<endl;
	}
	else if (level>1){
print_current_level(root->left,level-1);
print_current_level(root->right,level-1);
	}
}
int height(node* node){
	if(node==NULL){
		return 0;
	}
	else{
		int lheight=height(node->left);
		int rheight=height(node->right);
	
	if(lheight>rheight){
		return (lheight+1);
	}
	else{
		return (rheight+1);
	}
	}

}
node *newnode(int data){
	node* Node = new node();
	Node->data=data;
	Node->left=NULL;
	Node->right=NULL;
}
int main(){
    node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);

    cout << "Level Order traversal of binary tree is \n";
    print_level_order(root);

  getch();
}

