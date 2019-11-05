// Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "selectionSort.h"

int main()
{
	selectionSort s;
	s.sort();
	s.print();

	int arr[5] = { 22,55,11,66,88 };
	selectionSort s1(arr,(sizeof(arr)/sizeof(int)));
	s1.print();
	s1.sort();
	s1.print();
}

