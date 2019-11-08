#pragma once

#include "Sorting.h"

class insertionSort: public Sorting
{
private:
	int* arrayToSort;
	int size;
public:
	insertionSort()
	{
		arrayToSort = new int[5]{ 3,4,2,7,1 };
		size = 5;
	}
	insertionSort(int arr[], int s) :
		arrayToSort(new int[s]), size(s)
	{
		for (int i = 0; i < s; i++)
			arrayToSort[i] = arr[i];
	}

	void swap(int* first, int* second);
	void sort();
	void print();
};