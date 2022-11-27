#include<iostream>
#include <sstream>
using namespace std;

class CircularQueue{
	private : 
	int front;
	int rear;
	int arr[5];
	int Item_Count;

public : 
      CircularQueue(){
      	front = -1;
      	rear = -1;
      	Item_Count=0;
      	for (int i=0;i<5;i++){
         	arr[i]=0;
		  }
	  }
	  bool isEmpty(){
	  	if(front==-1 && rear ==-1)
	  		return true;
		  else 
		  return false;
	  }
	  bool isFull(){
	  	if((rear+1)%5==front)
	  		return true;
	  		
	  		else
	  		return false;

		  
	  }
	  void enqueue(int val){
	  	if(isFull()){
	  		cout<<"Queue is Full"<<endl;
	  		return;
		  }
		  else if (isEmpty()){
		  	front = 0;
		  	rear =0;
		  	arr[rear]=val;
		  	cout<<"The value : "<<val<<" "<< "enqueued successfully !"<<endl;
		  }
		  else {
		  	rear=(rear+1)%5;
		  	arr[rear]=val;
		  	cout<<"The value : "<<val<<" "<< "enqueued successfully !"<<endl;
		  }
		  Item_Count++;
	  }
	  int dequeue(){
	  	int x;
	  	if(isEmpty()){
	  		cout<<"Queue is empty"<<endl;
	  		return 0;
		  }
		  else if(front == rear){
		  	 x=arr[front];
		     arr[front]=0;
		  	front = -1;
		  	rear = -1;
		  	return x;
		  }
		  else {
		  	x=arr[front];
		  	arr[front]=0;
		  	front=(front+1)%5;
		  	Item_Count--;
		  	return x;
		  }
	  }
	  int count(){
	  	return (Item_Count);
	  }
	  int display(){
	  	cout<<"The values in Queue Are : "<<endl;
	  	for (int i=0;i<5;i++){
	  		cout<<arr[i]<<" ";
		  }
	  }
	  void DisplayBookNames(){
	  	int i;
	  		cout<<"The values in Queue Are : "<<endl;
	  	for ( i=0;i<5;i++){
	  	arr[i];
		  }
		  if(arr[0]==1 || arr[1]==2 || arr[2]==3 || arr[3]==4 || arr[4]==5 ){
		  	  if (arr[0]==1 ){
        	cout<<"\nchemistry Book\n";
    // inner if condition
    if (arr[1]==2 ) {
	cout<<"\nPhysics Book\n";
	
	 if(arr[2]==3 ){
	cout<<"\nEncylopedia Book\n";
	
	 if(arr[3]==4 ){
	cout<<"\nProgramming Book\n";
	
		 if(arr[4]==5 ){
	cout<<"\nAlgebra Book\n";
	
}}}}}


  	else   if (arr[0]==2 ){
  	  		cout<<"\nPhysics Book\n";
        

    // inner if condition
    if (arr[1]==1 ) {
	cout<<"\nchemistry Book\n";
	
	 if(arr[2]==3 ){
	cout<<"\nEncylopedia Book\n";
	
	 if(arr[3]==4 ){
	cout<<"\nProgramming Book\n";
	
		 if(arr[4]==5 ){
	cout<<"\nAlgebra Book\n";
	
}
}}}}
			else   if (arr[0]==3 ){
		  	  		cout<<"\nEncylopedia Book\n";
  	  	
        

    // inner if condition
    if (arr[1]==1 ) {
	cout<<"\nchemistry Book\n";
	
	 if(arr[2]==2 ){
	cout<<"\nPhysics Book\n";
	
	 if(arr[3]==4 ){
	cout<<"\nProgramming Book\n";
	
		 if(arr[4]==5 ){
	cout<<"\nAlgebra Book\n";
	
}
}}}}
	
  
  
	else   if (arr[0]==4){
   		cout<<"\nProgramming Book\n";
    // inner if condition
    if (arr[1]==1 ) {
	cout<<"\nchemistry Book\n";
	
	 if(arr[2]==2 ){
	cout<<"\nPhysics Book\n";
	
	 if(arr[3]==3 ){
	cout<<"\nEncylopedia Book\n";
	
		 if(arr[4]==5 ){
	cout<<"\nAlgebra Book\n";
	
}
}}}}
		  
		  
	else   if (arr[0]==5 ){
		     	cout<<"\nAlgebra Book\n";   
    // inner if condition
    if (arr[1]==1 ) {
	cout<<"\nchemistry Book\n";
	
	 if(arr[2]==2 ){
	cout<<"\nPhysics Book\n";
	
	 if(arr[3]==3 ){
	cout<<"\nEncylopedia Book\n";
	
		 if(arr[4]==4 ){
	cout<<"\nProgramming Book\n";
	
}
}}}}
  // outer else condition
  else {
  	    cout << "invalid number since the number might be not from 1 to 5\n";

  }
}
}

};



int main(){
		CircularQueue q1;
	int option,position,value;
	do{
		cout<<"\t\t\t\t\t\t--WELCOME--\t\t\t\t\t\t\n"<<endl;
		cout<<"Enter Your desired number from the given below options to perform Operation you want !\n"<<endl;
		cout<<"1.enqueue()\n"<<endl;
		cout<<"2.dequeue()\n"<<endl;
		cout<<"3.IsEmpty()\n"<<endl;
		cout<<"4.IsFull()\n"<<endl;
		cout<<"5.Count()\n"<<endl;
		cout<<"6.Display()\n"<<endl;
		cout<<"7.Clear Screen\n"<<endl;
		cout<<"8.Show Book Name\n"<<endl;

		cout<<"0.to quite the program or terminate"<<endl;
    
    cin>>option;
    
    switch(option){
    	case 0:
    		cout<<"Program terminated !"<<endl;
    		break;
    	case 1:
    		cout<<"enter the value you want to push in enqueue : "<<endl;
    		cin>>value;
    		q1.enqueue(value);
    		break;
    		case 2:
    			cout<<"Dequeue function called ! "<<q1.dequeue()<<endl;
				    			break;
    			case 3:
    				if(q1.isEmpty()){
    					cout<<"Queue is empty"<<endl;
					}
					else {
						cout<<"Queue is not empty"<<endl;
					}
					break;
						case 4:
    				if(q1.isFull()){
    					cout<<"Queue is Full"<<endl;
					}
					else {
						cout<<"Queue is not Full"<<endl;
					}
					break;
						case 5 : 
						cout<<"count function called : "<<q1.count()<<endl;
						break;
							case 6:
								cout<<"Display function called !"<<endl;
								q1.display();
								break;
								case 7:
										system("cls");
								break;
								case 8:
										cout<<"Bookname function called !"<<endl;
									q1.DisplayBookNames();
									break;
							default:
								cout<<"invalid number entered ! "<<endl;
	}
	}while(option!=0);
	return 0;
}
