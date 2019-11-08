#include "selectionSort.h"

void selectionSort::swap(int* first, int* second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void selectionSort::sort()
{
	int i, j, minIndex;

	for (i = 0; i < size-1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (arrayToSort[j] < arrayToSort[minIndex])
				minIndex = j;
		}
		swap(&arrayToSort[minIndex], &arrayToSort[i]);
	}
}

void selectionSort::print()
{
	std::cout << "Selection Sort:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << arrayToSort[i] << " ";
	}
	std::cout << std::endl;
}