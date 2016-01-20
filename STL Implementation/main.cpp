#include <iostream>
#include <list>

using namespace std;

/*
 * Non-templated (explicitly-typed) class implementations with C++'s Standard Library.
 */
class myStack {
public:

	void push(int data) {
		stdList.push_back(data);
	}
	void pop() {
		stdList.pop_back();
	}
	void printStack() {
		for (list<int>::const_iterator itr = stdList.begin(); itr != stdList.end(); ++itr) {
			cout << *itr << " ";
		}
		cout << "\n";
	}
	int getTop() {
		return stdList.back();
	}
	int getSize() {
		return stdList.size();
	}
	bool empty() {
		return stdList.empty();
	}
private:
	list<int> stdList;
};

class myQueue {
public:
	void push(int data) {
		stdList.push_back(data);
	};
	void pop() {
		stdList.pop_front();
	};
	void printQueue() {
		for (list<int>::const_iterator itr = stdList.begin(); itr != stdList.end(); ++itr) {
			cout << *itr << " ";
		}
		cout << "\n";
	}
	int getFront() {
		return stdList.front();
	}
	int getBack() {
		return stdList.back();
	}
	int getSize() {
		return stdList.size();
	}
	bool empty() {
		return stdList.empty();
	}

private:
	list<int> stdList;
};


int main () {

	/*
	 * Simple implementation of stacks and queues with C++'s Standard Library.
	 */

	//---------------------------Stacks---------------------------------------

	myStack mystack;

	mystack.push(1);
	mystack.push(2);
	mystack.push(3);

	/* Shows current stack */
	cout << "Current stack: ";
	mystack.printStack();

	/* Pop once */
	mystack.pop();
	cout << "After pop: ";
	mystack.printStack();

	/* Pop another */
	mystack.pop();
	cout << "After pop: ";
	mystack.printStack();

	/* Push once */
	mystack.push(2);
	cout << "After push: ";
	mystack.printStack();

	/* Push another */
	mystack.push(3);
	cout << "After push: ";
	mystack.printStack();

	/* Current top */
	cout << "Current top: " << mystack.getTop() << "\n";

	/* Current size */
	cout << "Size/isEmpty: " << mystack.getSize() << "/";

	/* Bool empty */
	if (mystack.empty() == 1)
		cout << "True\n";
	else
		cout << "False\n";

	//---------------------------Queues---------------------------------------

	cout << "\n";

	myQueue myqueue;

	myqueue.push(3);
	myqueue.push(2);
	myqueue.push(1);

	/* Shows current stack */
	cout << "Current stack: ";
	myqueue.printQueue();

	/* Pop once */
	myqueue.pop();
	cout << "After pop: ";
	myqueue.printQueue();

	/* Pop another */
	myqueue.pop();
	cout << "After pop: ";
	myqueue.printQueue();

	/* Push once */
	myqueue.push(2);
	cout << "After push: ";
	myqueue.printQueue();

	/* Push another */
	myqueue.push(3);
	cout << "After push: ";
	myqueue.printQueue();

	/* Current front */
	cout << "Current front/back: " << myqueue.getFront() << "/" << myqueue.getBack() << "\n";

	/* Current size */
	cout << "Size/isEmpty: " << myqueue.getSize() << "/";

	/* Bool empty */
	if (myqueue.empty() == 1)
		cout << "True\n";
	else
		cout << "False\n";
}

