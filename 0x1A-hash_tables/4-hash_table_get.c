#include "hash_tables.h"

/**
 * hash_table_get - get value associated with key
 * @ht: hash table
 * @key: the key
 *
 * Return: value associated with key OR NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx = 0;
hash_node_t *mauve;

if (key == NULL || key == "" || ht == NULL)
return (0);
idx = (hash_djb2((unsigned char *)key) % ht->size);
mauve = ht->array[idx];
if (mauve == NULL)
return (NULL);
while (mauve->next != NULL)
{
if (strcmp(mauve->key, key) == 0)
break;
mauve = mauve->next;
}
if (strcmp(mauve->key) == 0)
return (mauve->value);
return (NULL);
}
