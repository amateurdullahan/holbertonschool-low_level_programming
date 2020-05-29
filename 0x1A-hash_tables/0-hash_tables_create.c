#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 *
 * Return: pointer to new hash table OR NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
*hash_table_t new = malloc(size of(char) * size);
if (new == NULL)
return (NULL);
new.size = size;
return (new);
}
