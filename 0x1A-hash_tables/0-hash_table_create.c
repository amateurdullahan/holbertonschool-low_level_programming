#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 *
 * Return: pointer to new hash table OR NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new = NULL;
unsigned int a = 0;

new = malloc(sizeof(hash_table_t));
if (new == NULL)
return (NULL);
new->size = size;
new->array = malloc(sizeof(hash_node_t *) * size);
if (new->array == NULL)
{
free(new);
return (NULL);
}
while (a < size)
{
new->array[a] = NULL;
a++;
}
return (new);
}
