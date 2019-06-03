#include<iostream>
using namespace std;
#define SIZE 5
class Queue{
	public:
		#define SIZE 5
		int front = -1;
		int rear = -1;
		
		int A[SIZE];

bool isempty(){
	if(front == -1 && rear == -1)
		return true;
	else
		return false;
}

void enqueue( int value){
	if(rear == SIZE - 1) // queue is full
		cout<<"Queue is full \n";
	else{
		if(front == -1) // first element is inserted
			front = 0;
		rear ++;
		A[rear] = value; // insert at rear
	}
}

void dequeue(){
	if(isempty())
		cout<<"Queue is empty\n";
	else
		if(front == rear) // only one element
			front = rear + 1;
		else
			front++;
		
}

void showfront(){
	if(isempty())
		cout<<"Queue is empty\n";
	else
		cout<<"element at front is:"<<A[front];
}

void displayQueue(){
	if(isempty())
		cout<<"Queue is empty\n";
	else{
		for(int i = front ; i<=rear; i++)
			cout<<A[i]<<endl;
	}
}
};


int main(){
	Queue my_Q = new Queue();
	my_Q->enqueue(44);
	my_Q->enqueue(43);
	my_Q->enqueue(88);
	my_Q->displayQueue();
}
