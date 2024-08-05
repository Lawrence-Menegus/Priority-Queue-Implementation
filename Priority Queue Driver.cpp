// Name: Lawrence Menegus
// Date: 11/12/23
// Course: Data Structures and Algorithms
// Description: We will be working with the pirorityQueue.h and Driver.cpp files to create a Priority Queue and 
// extract the min of the queue. Throughout the program we will be adding and removing the mins from 
// the queue and printing the results along the Process. This file is the implementation file for the priorityQueue.h

#include "PriorityQueue.h"

using namespace std;

int main()
{
   // Initialize Priority Queue
    priorityQueue myqueue;

    // creates array
    int arr[50]; 

    // Checks if the Queue is empty
    if (myqueue.empty())
        cout << "My priority Queue is empty\n" << endl;

    // Inserts the value 59 into the Queue
    myqueue.insert(59);
    cout << "After Inserting 59 Priority Queue has" << endl;

    // Prints out Queue
    myqueue.printArray(arr);
    cout << endl;

    // Inserts the value 41 into the Queue
    myqueue.insert(41);
    cout << "After Inserting 41 Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Inserts the value 25 into the Queue
    myqueue.insert(25);
    cout << "After Inserting 25 Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Inserts the value 12 into the Queue
    myqueue.insert(12);
    cout << "After Inserting 12 Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Inserts the value 91 into the Queue
    myqueue.insert(91);
    cout << "After Inserting 91 Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Find the Minimum number in the Queue
    myqueue.min();

    // Removes the Minimum number from the Priority Queue
    myqueue.extractMin();
    cout << "After extracting the minimum value Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Inserts the value 34 into the Queue
    myqueue.insert(34);
    cout << "After Inserting 34 Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Inserts the value 63 into the Queue
    myqueue.insert(63);
    cout << "After Inserting 63 Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Removes the Minimum number from the Priority Queue
    myqueue.extractMin();
    cout << "After extracting the minimum value Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Inserts the value 75 into the Queue
    myqueue.insert(75);
    cout << "After Inserting 75 Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Inserts the value 85 into the Queue
    myqueue.insert(85);
    cout << "After Inserting 85 Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Removes the Minimum number from the Priority Queue
    myqueue.extractMin();
    cout << "After extracting the minimum value Priority Queue has" << endl;
    myqueue.printArray(arr);
    cout << endl;

    // Finds the minimum number in Priority Queue
    cout << "Minimum value is ";
    cout << myqueue.min() << endl;

    return 0;
}