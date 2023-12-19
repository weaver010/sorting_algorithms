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
for (j = 1; j <= size; j++)
{
if (array[j - 1] > array[j])
{
t = array[j - 1];
array[j - 1] = array[j];
array[j] = t;
print_array(array, size);
}
}
}
}
