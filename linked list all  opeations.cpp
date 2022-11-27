#include<iostream>
using namespace std;
class Node{      //we work on oop concepts objects and class for linked list also use of point for which class is created 
   public :
	int data;    // it is the variable where our each element information is stored.
	Node* next;   // next points to the address stored of previos node into current node and the current node next address linked  to further nodes
	int key;      //we use this key to linked or dislinked or insert a node in betweeen by knowing this specific key adress of each node.
};

class Linked_List{   //here we do all operations includeing creation,traverse, append/prepend/insert_between , delete, uptate
public :
	Node* head;        
	
	Linked_List(){     //constructor
		head=NULL;     //initially head points to zero means null.thus theres no connection made yet to it backward or forward.
	}
	Linked_List(Node* n){  // n is the number basically treverse one by one means 1 then 2 then 3  
		head=n;            // n is storing into head node represent this is the 1st element then head points to 2nd element basically stored in n=one by one traverse value
	}
	
	//1.check if node exits
	
	Node * Node_exist(int k){ //we are checking if node exist for sack of entering a new inbetweent/inlast element or updating an element or deleting an element.
		Node *temp=NULL;    // new pointer temp storing no value initially.
		Node *ptr=head;     // head is equal to n assum n =1 then head =1 means ptr new pointer storing the same value as head holding currently.
		while(ptr!=NULL){   // the loop executes until and unless prt is not equal to zero 
			if(ptr->key==k){  //the if body only executes when ptr key is equal to the key k found in the process of traverseing
				temp=ptr;     //and if the key matched with the key pointer hold then temp which is initially null have the same value as ptr holding currently.
			}
			ptr = ptr->next; //after if body,ptr change its bolonging with head as above and points to next which is used to link with the head of another node.and treaversing continues.
		} 
		return temp;    //when creating a function using pointer it is necessery to mention return type otherwise function will not work.
	}
	
	//Opeations on singly linked list starts from below : 
	 
	 //2.Append a node to the list (placing node in the end of the list )
	 void append_node(Node *n){ //n again having a serial number of nodes assum n is 2 
	 	if(Node_exist(n->key)!=NULL){ // if n is 2 and if the key also holding a number 2 , when we go to node havind sr num 2 and if node exist the if body executes
	 		cout<<"the node already existed with same key"<<n->key<<"\ntry enter unique key to place new node in the end of the list"<<endl;
		 }
		 else{ 
		 	if(head==NULL){ //this body executes only if theres no node exist yet 
		 		head=n;   // the head which is initially null now points to n assum n is one as it is the first node so key n is 1 which is point the first means head node.
		 		cout<<"node appended"<<endl;
			 }
			 else{    //if theres some existed nodes then the append happened and the new node added at the end of the nodes already there.
		Node *ptr=head;     // head is equal to n assum n =1 then head =1 means ptr new pointer storing the same value as head holding currently.
		while(ptr->next!=NULL){   // the loop executes until and unless ptr of next means ptr assum have 2 then next 2 obvios not equal to zero so loop executes till next finded zero.traversing continues
		ptr=ptr->next;
			 }
			  ptr->next=n;
		cout<<"node appended"<<endl;
		 }
	 }
} 

    //3.insert a node at start
	 void prepend_node(Node *n){
	 		if(Node_exist(n->key)!=NULL){ // if n is 2 and if the key also holding a number 2 , when we go to node havind sr num 2 and if node exist the if body executes
	 		cout<<"the node already existed with same key"<<n->key<<"\ntry enter unique key to place new node in the end of the list"<<endl;
		 }
		 else{
		 		 n->next=head;    //now n is the new node lets say n4 so n4 comes before n1 so n4's next will now highlightinh head of n1 so connection made,n4 comes first then n1 then n2 and so on 
		 		 head=n;       // now obviosly head will now to be changed from n1 to n4 cuz new node before all is now n4 so head is now n4 
		 	cout<<"node prepended"<<endl;

		 }
	 }
	 //4.insert a node in between somewhere between nodes
	 void insert_between(int k,Node * n){
	 	//check if value exists with same key pope an error then
	 	Node *ptr=Node_exist(k);
	 	if(ptr==NULL){
	 				 	cout<<"no node exists with the key you provided after which you want to insert your new node"<<endl;

		 }
		 else{
		 		if(Node_exist(n->key)!=NULL){ // if n is 2 and if the key also holding a number 2 , when we go to node havind sr num 2 and if node exist the if body executes
	 		cout<<"the node already existed with same key"<<n->key<<"\ntry enter unique key to place new node in the end of the list"<<endl;
		 }
		 else{
		 	n->next=ptr->next; //n is assume n4 now n4's next will linked with ptr and ptr storing someone's next lets say n3 so n3 linked with n4,assum  before n2 linked with n2 now n3 chain is broken
		 	ptr->next=n;  // in order to complelte chain n2 now have to linked with second last node which is n4 ptr storing later n3 now ptr stroing n2 which is equal to n4 as n so n2 linked with n4 chain compleleted
		 }
		 }	 
	 }
	 //5.deleting a node 
	 void delete_node(int k){
	 	if(head==NULL){
	 		cout<<"linked list already empty nothing here to delete."<<endl;
		 }
		 else if(head!=NULL){
		 	if(head->key==k){
		 		cout<<"node is deleted"<<endl;
			 }
			 else{
			 	Node *temp=NULL;
			 	Node *prev=head;
			 	Node *current=head->next;
			 	while(current!=NULL){
			 		if(current->key==k){
			 			temp=current;
			 			current=NULL;
					 }
					 else{
					 	prev=prev->next;
					 	current=current->next;
					 }
				 }
				 if(temp!=NULL){
				 	prev->next=temp->next;
				 	cout<<"node unlinked with the value provided : "<<k<<endl;
				 }
				 else{
				 	cout<<"node does not exist with key value provided : "<<k<<endl;
				 }
			 }
		 }
	 }
	 //6.updating a node 
	 void update_a_node(int k,int d){
	 	Node *ptr=Node_exist(k);
	 	if(ptr!=NULL){
	 		ptr->data=d;
	 		cout<<"node data updated successfully"<<endl;
		 }
		 else{
		 		 		cout<<"node does not exists witht the key value provided "<<k<<endl;

		 }
	 }
	 void display_list(){
	 	if(head==NULL){
	 		cout<<"no nodes exists to print"<<endl;
		 }
		 else{
		 	cout<<endl<<"Linked list values : ";
		 	Node *temp=head;
		 	while(temp!=NULL){
		 		cout<<"(key value : "<<temp->key<<","<<" data : "<<temp->data<<")";
		 		temp=temp->next;
			 }
		 }
	 }
};
int main(){
	
  Linked_List s;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.append_node(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.prepend_node(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      s.insert_between(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.delete_node(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      s.update_a_node(key1, data1);

      break;
    case 6:
      s.display_list();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}
