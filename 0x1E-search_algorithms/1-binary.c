#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, or -1 value is not present in array or
 * if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		/**
		 * initializing indexes, where low is the starting point of the search,
		* and high the ending point of the search
		*/
		size_t low = 0;
		size_t high = size - 1;
		size_t mid = 0;

		while (low <= high)
		{
			/* calculate the middle index */
			mid = (low + high) / 2;
			/* print the array being searched */
			printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i < high)
				printf(",");
			}
			printf("\n");
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
				high = mid - 1; /* search in left half */
			else
				low = mid + 1; /* search in right half */
		}
	}
		return (-1);
}
