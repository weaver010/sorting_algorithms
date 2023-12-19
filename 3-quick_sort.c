#include "sort.h"
/**
*swap - swap
*@array: array
*@x: x
*@y: y
*/
void swap(int *array, unsigned int x, unsigned int y)
{
	int t;

	t = array[x];
	array[x] = array[y];
	array[y] = t;
}
/**
 *partition - partition 
 *@array: array
 *@l: low
 *@h: high 
 *@size: size
 *Return: o
 */
int partition(int *array, unsigned int l, unsigned int h, unsigned int size)
{
	int pivot = array[h];
	unsigned int o = l, i;

	for (i = l; i < h; i++)
	{
		if (array[i] < pivot)
		{
			if (array[o] != array[i])
			{
				swap(array, o, i);
				print_array(array, size);
			}
			o++;
		}
	}
	if (array[o] != array[h])
	{
		swap(array, o, h);
		print_array(array, size);
	}
	return (o);
}
/**
 *impl - implementation of quick soet
 *@array: array
 *@l: low
 *@h: high
 *@size: size
 */
void impl(int *array, unsigned int l, unsigned int h, int size)
{
	unsigned int i = 0;


	if (l < h)
	{
		i = partition(array, l, h, size);

		impl(array, l, i - 1, size);
		impl(array, i + 1, h, size);
	}
}
/**
 *quick_sort - sort
 *@array: array
 *@size: size
 */
void quick_sort(int *array, unsigned int size)
{
	if (!array || size < 2)
	{
		return;
	}
	impl(array, 0, size - 1, size);
}
