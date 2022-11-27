#include<iostream>

using namespace std;

class Queue{
	private : 
	int front;
	int rear;
	int arr[5];

public : 
      Queue(){
      	front = -1;
      	rear = -1;
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
	  	if(rear==4)
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
		  	rear++;
		  	arr[rear]=val;
		  	cout<<"The value : "<<val<<" "<< "enqueued successfully !"<<endl;
		  }
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
		  	front++;
		  	return x;
		  }
	  }
	  int count(){
	  	return (rear-front+1);
	  }
	  int display(){
	  	cout<<"The values in Queue Are : "<<endl;
	  	for (int i=0;i<5;i++){
	  		cout<<arr[i]<<" ";
		  }
	  }
};

int main(){
		Queue q1;
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
								case 9:
										system("cls");
								break;
							default:
								cout<<"invalid number entered ! "<<endl;
	}
	}while(option!=0);
	return 0;
}
