#include "search_algos.h"

/**
  * linear_search - Searche a value in an array
  *                 of integers using linear search.
  * @array: A pointer to First element of array to be search.
  * @size: Number of Elements stored in the array.
  * @value: The value to be searched.
  *
  * Return: When the value is not Exist or array is NULL, -1,
  *         otherwise, the 1st index where the value is located.
  *
  * Description: After compared value in array prints a value.  
  *
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
