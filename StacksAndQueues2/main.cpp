#include <iostream>
#include <limits>
#include <time.h>

using namespace std;

class myStack {
public:
	myStack() {
		dataStkIndex = -1;
		minStkIndex = -1;
		min = numeric_limits<int>::max();
	}

	void push(int n) {
		dataStkIndex++;
		dataStk[dataStkIndex] = n;
		if (n < min) {
			minStkIndex++;
			min = n;
			minStk[minStkIndex] = n;
		}
	}
	void pop() {
		if (dataStk[dataStkIndex] == minStk[minStkIndex]) {
			minStkIndex--;
		}
		dataStkIndex--;
	}
	int getMin() {
		return minStk[minStkIndex];
	}
	int top() {
		return dataStk[dataStkIndex];
	}

private:
	int dataStkIndex, minStkIndex, min;
	int dataStk[10];
	int minStk[10];

};

int main() {

	/*
	 * Question: How would you design a stack which, in addition to push and pop, also has
	 * 			 a function min which returns the minimum element? Push, pop and min should
	 * 			 all operate in O(1) time.
	 *
	 * Solution: Uses two stacks to keep track of data and minimum value. Sacrifices some
	 * 			 space complexity to get O(1) times for all three operations.
	 *
	 * Caveat:   For simplicity, stack is implemented with fixed size arrays. Also, further
	 * 			 optimization can be done to reduce space complexity (ie. do not store
	 * 			 duplicate elements).
	 *
	 * Complexity: O(1) for all three operations.
	 *
	 */

	myStack myStack;
	srand(time(NULL));

	cout << "Stack:\n";
	for (int i = 0; i < 7; i++) {
		myStack.push(rand() % 5 + 1); //Allow some duplicates
		cout << "|" << myStack.top() << "|\n";
	}

	cout << "Stack min: " << myStack.getMin() << endl;

	cout << "\nMin test:\n";
	for (int i = 0; i < 7; i++) {
		cout << "Pop: " << myStack.top() << endl;
		myStack.pop();
		cout << "Stack min: " << myStack.getMin() << endl;
	}

	/*
	 * 	 Bug Fix: minStdIndex likely at -1, since it started at -1.
	 *
	 *   Stack:
			|1|
			|4|
			|1|
			|2|
			|2|
			|4|
			|4|
			Stack min: 1

		 Min test:
			Pop: 4
			Stack min: 1
			Pop: 4
			Stack min: 1
			Pop: 2
			Stack min: 1
			Pop: 2
			Stack min: 1
			Pop: 1
			Stack min: 17044336
			Pop: 4
			Stack min: 17044336
			Pop: 1
			Stack min: 17044336
	 *
	 */

}
