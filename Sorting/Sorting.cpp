// Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Sorting.h"
#include "selectionSort.h"
#include "insertionSort.h"

int main()
{
	Sorting *select = new selectionSort;
	select->sort();
	select->print();

	int arr[5] = { 22,55,11,66,88 };
	Sorting *select1 = new selectionSort (arr,(sizeof(arr)/sizeof(int)));
	select1->sort();
	select1->print();

	int arr1[6] = { 12,45,76,23,36,89 };
	Sorting* insert = new insertionSort(arr1, (sizeof(arr1) / sizeof(int)));
	insert->sort();
	insert->print();
}

