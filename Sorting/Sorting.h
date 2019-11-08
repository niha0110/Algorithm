#pragma once

#include <iostream>

class Sorting
{
protected:
	int *arrayToSort;
	int size;
public:
	Sorting()
	{
		arrayToSort = new int[5]{ 3,4,2,7,1 };
		size = 5;
	}
	Sorting(int arr[], int s) :
		arrayToSort(new int[s]), size(s)
	{
		for (int i = 0; i < s; i++)
			arrayToSort[i] = arr[i];
	}
	virtual void sort() = 0;
	virtual void print() = 0;
};