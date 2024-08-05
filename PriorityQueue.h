#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <iostream>
using namespace std; 

class priorityQueue
{
private:
	int size;
	int *data;

public:
	static const int CAPACITY = 50;

	// Constructor 
	priorityQueue()
	{
		size = 0; 
		data = new int[CAPACITY];
	}

	// Deestructor 
	~priorityQueue()
	{
		delete[] data; 
	}

	// Get Parent Function 
	// Purpose: calculates the index of a node's parent node
	// Post: integer value returned to caller
	int getParent(int index)
	{
		return (index - 1) / 2;
	}

	// Get Left Child Function 
	// Purpose: calculates the index of node's left child
	// Post: integer value returned to caller
	int getLeftChild(int index)
	{
		return 2 * index + 1;
	}

	// Get Right Child Function 
	// Purpose: calculates the index of a node's right child
	// Post: integer value returned to the user
	int getRightChild(int index)
	{
		return 2 * index + 2;
	}

	// Swap Function 
	void swap(int& item1, int& item2)
	{
		int temp = item1;
		item1 = item2;
		item2 = temp;
	}

	// Insert Function 
	void insert(int item)
	{
		if (size == 0)
		{
			data[0] = item;
			++size;
			return;
		}

		// Add the new item at the end of the array.
		data[size] = item;
		++size;

		// Reheapify the heap starting from the last item and moving upwards.
		int currentIndex = size - 1;
		while (currentIndex > 0)
		{
			int parentIndex = getParent(currentIndex);

			// Compares the current index is larger than the parenet index 
			if (data[currentIndex] < data[parentIndex])
			{
				// Swaps the current and parent index 
				swap(data[currentIndex], data[parentIndex]);
				currentIndex = parentIndex;
			}
			else
			{
				break;
			}
		}
	}

	// Print Function 
	void printArray(int [])
	{
		// Prints out the values in Array 
		for (int i = 0; i < size; i++)
		{
			cout << data[i] << " ";
		}
		cout << endl;
	}

	void heapify(int index)
	{
		int left = getLeftChild(index);
		int right = getRightChild(index);
		int smallest = index;

		// comparies if the left node is smaller than size and data is left is less then smallest value left node equals smallest 
		if (left < size && data[left] < data[smallest])
		{
			smallest = left;
		}
		//comparies if the right node is smaller than size and data of the right node is less then smallest value right node equals smallest 
		if (right < size && data[right] < data[smallest])
		{
			smallest = right;
		}

		// if smallest is not index swap the index and smallest value.
		if (smallest != index)
		{
			swap(data[index], data[smallest]);
			heapify(smallest);
		}
	}
	//Extract Mininum Function 
	int extractMin()
	{
		if (size == 0)
		{
			return -1; 
		}
		// Midvalues is data at data position 0 
		int minItem = data[0];
		data[0] = data[size - 1];
		--size;

		// Heapfies the 0 number 
		heapify(0);
		return minItem;
	}

	// Empty Function
	bool empty() const
	{
		return size == 0; 
	}

	//  Mininum
	int min() const
	{
		// Handles the cases when the Priority queue is empty 
		if (size == 0)
		{
			// chooses the appropriate value 
			return -1; 
		}
		//return the smallest item
		return data[0]; 
		
	}
};

#endif