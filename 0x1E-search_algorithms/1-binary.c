#include "search_algos.h"

/**
 * binary_search - binary search
 * @array: pointer
 * @size: size of array
 * @value: value to find
 *
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
size_t c = 0, ct;
size_t mid;
size_t end = size - 1;

if (array == NULL)
return (-1);
while (c <= end)
{
mid = (c + end) / 2;
printf("Searching in array: ");
for (ct = c; sr < end ; ct++)
printf("%d\n", array[ct]);
printf("%d\n", array[ct]);
if (array[mid] < value)
c = mid + 1;
else if (array[mid] == value)
{
return (array[mid]);
}
else
end = mid - 1;
}
return (-1);
}
