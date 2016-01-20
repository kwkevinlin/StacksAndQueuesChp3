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
		stdQueue.push_back(data);
	};
	void pop() {
		stdQueue.pop_front();
	};
	void printQueue() {
		for (list<int>::const_iterator itr = stdQueue.begin(); itr != stdQueue.end(); ++itr) {
			cout << *itr << " ";
		}
		cout << "\n";
	}

private:
	list<int> stdQueue;
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


}

