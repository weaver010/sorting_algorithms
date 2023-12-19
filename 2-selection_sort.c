#include "sort.h"
/**
 * selection_sort - sort
 * @size: size
 * @array: array
 */
void selection_sort(int *array, size_t size)
{
unsigned int i, j;
int t, o, c = 0;

if (array == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
t = i;
c = 0;
for (j = i + 1; j < size; j++)
{
if (array[t] > array[j])
{
t = j;
c += 1;
}
}
o = array[i];
array[i] = array[t];
array[t] = o;
if (c != 0)
{
print_array(array, size);
}
}
}
