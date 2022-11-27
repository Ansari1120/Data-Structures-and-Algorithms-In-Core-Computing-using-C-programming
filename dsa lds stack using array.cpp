#include<iostream>
#include<string>
using namespace std;

class Stack{
	private :
		int top;
		int array[5];
		
		public :
		Stack(){
			top=-1;
			for(int i=0;i<5;i++){
				array[i]=0;
			}
		}
	   bool isEmpty(){
	   	if(top==-1)
	   	return true;
	   	else 
	   	return false;
	   }
	    bool isFull(){
	   	if(top==4)
	   	return true;
	   	else 
	   	return false;
	   }
	   void push(int val){
	   	if(isFull()){
	   		cout<<"Stack is overflow"<<endl;
		   }
		   else{
		   	top++;
		   	array[top]=val;
		   }
	   }
	   int Pop(){
	   	if(isEmpty()){
	   		cout<<"Stack is Underflow"<<endl;
	   		return 0;
		   }
		   else{
		   	int popvalue=array[top];
		   	array[top]=0;
		   	top--;
		   	return popvalue;
		   }
	   }
	   
	   int Count(){
	   	return (top+1);
	   }
	   int peek(int pos){
	   		if(isEmpty()){
	   		cout<<"Stack is Underflow"<<endl;
	   		return 0;
		   }
		   else{
		   	return array[pos];
		   }
	   }
	   void Change(int pos,int val){
	   	array[pos]=val;
	   	cout<<"Value are changed at location "<<pos<<endl;
	   }
	   void display(){
	   	cout<<"All values in stack are :\n"<<endl;
	   	for(int i=4;i>=0;i--){
	   		cout<<array[i]<<endl;
		   }
	   }
};
int main(){
	Stack s1;
	int option,position,value;
	do{
		cout<<"\t\t\t\t\t\t--WELCOME--\t\t\t\t\t\t\n"<<endl;
		cout<<"Enter Your desired number from the given below options to perform Operation you want !\n"<<endl;
		cout<<"1.Pop()\n"<<endl;
		cout<<"2.Push()\n"<<endl;
		cout<<"3.IsEmpty()\n"<<endl;
		cout<<"4.IsFull()\n"<<endl;
		cout<<"5.peek()\n"<<endl;
		cout<<"6.Count()\n"<<endl;
		cout<<"7.Change()\n"<<endl;
		cout<<"8.Display()\n"<<endl;
		cout<<"9.Clear Screen\n"<<endl;
		cout<<"0.to quite the program or terminate"<<endl;
    
    cin>>option;
    
    switch(option){
    	case 0:
    		cout<<"Program terminated !"<<endl;
    		break;
    	case 1:
    		cout<<"enter the value you want to push in stack : "<<endl;
    		cin>>value;
    		s1.push(value);
    		break;
    		case 2:
    			cout<<"Pop function called - poped value "<<s1.Pop()<<endl;
    			break;
    			case 3:
    				if(s1.isEmpty()){
    					cout<<"Stack is empty"<<endl;
					}
					else {
						cout<<"Stack is not empty"<<endl;
					}
					break;
						case 4:
    				if(s1.isFull()){
    					cout<<"Stack is Full"<<endl;
					}
					else {
						cout<<"Stack is not Full"<<endl;
					}
					break;
					case 5:
						cout<<"Enter the position you want to peek : "<<endl;
						cin>>position;
						cout<<"Peek function Called !\n at index postion : "<<position<<" is the value placed is :  "<<s1.peek(position)<<endl;
						break;
						case 6 : 
						cout<<"count function called : "<<s1.Count()<<endl;
						break;
						case 7:
							cout<<"Change function called ! "<<endl;
							cout<<"Enter the position you want to Change "<<endl;
							cin>>position;
							cout<<endl;
							cout<<"Enter the value you want to change ";
							cin>>value;
							s1.Change(position,value);
							break;
							case 8:
								cout<<"Display function called !"<<endl;
								s1.display();
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
