#include <iostream>

using namespace std;

class Cqueue {
	int arr[100], front, rear, len, temp;
public:
	Cqueue() {
		front = rear = -1;
		len = 100;
	}

	void insRear(int x) {
		if((rear + 1)%len == front)
			cout << "Queue is full" << endl;
		else {
			if(isEmpty())
				front = rear = 0;
			else
				rear = (rear + 1)%len;
			arr[rear] = x;
		}
	}

	void insFront(int x) {
		if((rear + 1)%len == front)
			cout << "Queue is full" << endl;
		else {
			if(isEmpty())
				front = rear = 0;
			else
				front = (front + len - 1)%len;
			arr[front] = x;
		}
	}

	int deleteFront() {
		if (isEmpty())
			cout << "Queue is Empty" << endl;
		else {
			if(rear == front) {
				temp = arr[front];
				front = rear = -1;
			}
			else {
				temp = arr[front];
				front = (front + 1)%len;
			}
			return temp;
		}
	}

	int deleteRear() {
		if (isEmpty())
			cout << "Queue is Empty" << endl;
		else {
			if(rear == front) {
				temp = arr[front];
				front = rear = -1;
			}
			else {
				rear = (rear + len -1) % len;
			}
			return temp;
		}
	}



	void display() {
		cout << "Queue : " ;
		int i = front;
		while(i!=rear+1) {
			cout << arr[i] << " ";
			i = (i + 1) % len;
		}
		cout << endl;
	}

	bool isEmpty() {
		if(rear == -1 && front == -1)
			return true;
		return false;
	}

	int Front() {
		return arr[front];
	}


};

int main() {

	Cqueue Q;
	int len,  arr[100], k;

	cout << "Enter array length " ;
	cin >> len;
	for(int i=0;i<len;++i)
		cin >> arr[i];
	cout << "Enter value of k ";
	cin >> k;

	Q.insRear(arr[0]);

	for(int i=1;i<k;++i) {
		if(Q.Front() < arr[i]) {
			Q.insRear(arr[i]);
			Q.deleteFront();
		}
	}

	cout << Q.Front() << " ";

	for(int i=1;i<len;++i) {
			if(Q.Front() < arr[i]) {
				Q.insRear(arr[i]);
				Q.deleteFront();
			}
			cout << Q.Front() << " ";
	}
}

