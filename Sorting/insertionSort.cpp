#include "insertionSort.h"


void insertionSort::sort()
{
	int min, j;

	for (int i = 1; i < size; i++)
	{
		min = arrayToSort[i];
		j = i-1;

		while (j >= 0 && arrayToSort[j] > min)
		{
			arrayToSort[j + 1] = arrayToSort[j];
				j = j - 1;
		}
		arrayToSort[j + 1] = min;
	}
}

void insertionSort::print()
{
	std::cout << "Insertion Sort:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << arrayToSort[i] << " ";
	}
	std::cout << std::endl;
}