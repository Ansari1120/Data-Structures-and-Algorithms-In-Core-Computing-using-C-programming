#include<iostream>
using namespace std;
class Stack{   // implementig stack using array
	int top;
	
	public :
	 int Array[100];
      Stack(){
      	top = -1;
     
	  }
	  void print();
	  	bool push(int x);
      	int pop();
	int peek();
      	bool isEmpty(); 
};
    bool Stack::push(int x){
    	if(top>=(100-1)){
    		cout<<"stack is overflow"<<endl;
    		return false;
		}
		else {
		Array[++top]=x;
			cout<<x<<"pushed into stack !\n";
			return true;
		}
		
	}
	int Stack::pop(){
		if(top<0){
			cout<<"Stack is under flow !";
			return 0;
		}
		else{
			int x=Array[top--];
	//cout<<x<<"poped from stack\n";
			return x;
		}
	}
	
	int Stack::peek(){
		if(top<0){
			cout<<"Stack is empty"<<endl;
		}
		else {
			int x=Array[top];
			return x;
		}
	}
	
	bool Stack::isEmpty(){
	
		return(top<0);
	}
	
	void Stack::print(){
			class Stack s;

	}
	int main(){
		class Stack s;
		s.push(40);
		s.push(12);
		s.push(41);
	s.pop();
	 cout<<s.peek()<<" is the top element in stack\n";
	cout<<"Elements present in stack : \n";
	    do
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
        		

    }while(!s.isEmpty());

		return 0;
		
	}
