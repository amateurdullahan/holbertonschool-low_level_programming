#include "hash_tables.h"

/**
 * key_index - return index of given key
 * @key: key to index
 * @size: size of hash table
 *
 * Return: unsigned long int of index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
