#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in array
  *sing binary search.
  * @array: It pointer to the first element of the sub-array to search.
  * @left: The first index of the sub-array to search.
  * @right: The last index of the sub-array to search.
  * @value: The value to be searched.
  *
  * Return: If the value is not exist, -1.
  *         otherwise, the index where the value is located.
  *
  * Description: Prints the sub-array being searched for each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *  using advanced binary search.
  * @array: It point to the 1st element of array to be search.
  * @size: The number of elements stored in the array.
  * @value: The value to be searched.
  *
  * Return: If the value is not exist or the array is empty, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
