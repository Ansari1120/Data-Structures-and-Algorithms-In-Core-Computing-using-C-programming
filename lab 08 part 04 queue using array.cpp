#include <iostream>
using namespace std;
struct QueueArray{
	int front,rear,capacity;
	int* queue;
	
	QueueArray(int c){
		front=rear=0;
		capacity=c;
		queue= new int;
	}
	~QueueArray() { delete[] queue; }
	

void Enqueue(int data)
{
	if(capacity == rear){
		cout<<"Queue is full\n";
		return;
	}
	else{
		queue[rear] = data;
		rear++;
	}
	return;
}
void Dequeue(){
	if(front == rear){
		cout<<"Queue is Empty\n";
		return;
	}
	else{
		for(int i=0;i < rear - 1;i++){
			queue[i] = queue[i + 1];
		}
		rear--;
	}
	return;
}

void print(){
	int i;
		if(front == rear){
		cout<<"Queue is empty\n";
		return;
	}
		for(i = front;i < rear;i++){
			cout<<"\n Values in the queue are : "<<queue[i];
		}
	return;
}
void Front_val(){
	if(front == rear){
		cout<<"Queue is empty\n";
		return;
	}
		cout<<"\n"<<queue[front]<<" <-- is the front value\n";
		return;
	
}
};
int main(void){
	QueueArray q(6);
	q.print();
	// inserting elements in the queue 
	cout<<"\n Values in the Queue : ";
	q.Enqueue(21);
	q.Enqueue(98);
	q.Enqueue(72);
	q.Enqueue(24);
	q.Enqueue(45);
	// display queued list
	q.print();
		cout<<"\n Values in the after insertion Queue : ";

		q.Enqueue(60);
		
			q.print();
	//display front value
//	q.Front_val();
	
	
	//Deleting elements in the queue
	q.Dequeue();
	q.Dequeue();
	cout<<"\nvalues in the Queue after deletion : ";
	q.print();
	q.Front_val();
	return 0;
	
	
}
