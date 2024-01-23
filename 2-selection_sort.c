#include "sort.h"
/**
 * selection_sort - a function that sorts an array of integers
 * @array: array integer
 * @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				_swap(&array[j], &array[min]);
			}
		}
		print_array(array, size);
	}
}
/**
 * _swap - the values of two integers.
 * @a: a Pointer to the first integer
 * @b: a Pointer to the second integer
*/
void _swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
