#include <iostream>
#include "priorityQueue.h"
using namespace std;

int main()
{
	// Part B 
	priorityQueue myqueue;

	if (myqueue.empty())
		cout << "My priority Queue is empty\n" << endl;

	myqueue.insert(59);
	cout << "After Inserting 59 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.insert(41);
	cout << "After Inserting 41 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.insert(25);
	cout << "After Inserting 25 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.insert(12);
	cout << "After Inserting 12 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.insert(91);
	cout << "After Inserting 91 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.min();
	myqueue.extractMin();
	cout << "After extracting the mininum value Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.insert(34);
	cout << "After Inserting 34 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.insert(63);
	cout << "After Inserting 63 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.extractMin();
	cout << "After extracting the minimum value Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.insert(75);
	cout << "After Inserting 75 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.insert(85);
	cout << "After Inserting 85 Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;

	myqueue.extractMin();
	cout << "After extracting the minimum value  Priority Queue has" << endl;
	myqueue.printArray();
	cout << endl;


	cout << "Minimum value is ";
	cout << myqueue.min() << endl;

	system("pause");
	return 0;
}
