#include "sort.h"
/**
 * swap - swap
 * @x:  x
 * @y: y
 */
void swap(int *x, int *y)
{
	int t;

	t = *x;
	*x = *y;
	*y = t;
}
/**
 * bubble_sort - sort
 * @array: the array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	
	if (size <= 1)
{
		return;
}
	for (i = 0; i < (size - 1); i++)
		for (j = 0; j <=size; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j - 1], &array[j]);
				print_array(array, size);
			}
}
