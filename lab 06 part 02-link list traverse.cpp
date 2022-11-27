

                            //2.linked list traverse




    //2.linked list traverse

#include<iostream>
using namespace std;
class Node{
	public :
	int Info;
	Node* Next;
};
void Display(Node* print){
	while(print!=NULL){
		cout<<print->Info<<" ";
	print=print->Next;
	}
}
int main(){
	Node* Head=NULL;
		Node* Second=NULL;
			Node* Third=NULL;
			
			Head =new Node();
				Second =new Node();
					Third =new Node();
					
					Head->Info=7;
					Head->Next=Second;
					 
					Second->Info=40;
					Second->Next=Third; 
					
					Third->Info=3;
					Third->Next=NULL; 
					
					Display(Head);
					
					return 0;
}
