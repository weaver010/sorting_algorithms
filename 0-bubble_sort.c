#include "sort.h"
/**
 * bubble_sort - sort
 * @array: the array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
unsigned int i = 0, j = 0;
int t = 0;
if (array == NULL || size < 2)
{
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (array[j] > array[j + 1] && array[j + 1])
{
t = array[j];
array[j] = array[j + 1];
array[j + 1] = t;
print_array(array, size);
}
}
}
}
