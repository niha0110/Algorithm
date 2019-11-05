#pragma once
#include <iostream>

class selectionSort
{
private:
	int *arrayToSort;
	int size;
public:
	selectionSort()
	{
		arrayToSort = new int[5]{ 3,4,2,7,1 };
		size = 5;
	}
	selectionSort(int arr[], int s) :
		arrayToSort(new int [s]), size(s) 
	{
		for (int i = 0; i < s; i++)
			arrayToSort[i] = arr[i];
	}

	void swap(int* first, int* second);
	void sort();
	void print();
};