#include "hash_tables.h"

/**
 * hash_table_set - set a hash_table
 * @ht: the array
 * @key: the key
 * @value: the value at key
 *
 * Return: 1 on success OR 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int hashidx, idx;
char *valco;
hash_node_t *newd;
  
if (key == NULL || ht == NULL || strcmp(key, "") == 0)
return (0);
hashidx = key_index((unsigned char *)key, ht->size);
valco = strdup(value);
if (valco == NULL)
return (0);
for (idx = hashidx; ht->array[idx]; idx++)
{
if (strcmp(ht->array[idx]->key, key) == 0)
{
free(ht->array[idx]->value);
ht->array[idx]->value = valco;
return (1);
}
}
newd = malloc(sizeof(hash_node_t));
if (newd == NULL)
{
free(valco);
return (0);
}
newd->value = valco;
newd->next = ht->array[hashidx];
ht->array[hashidx] = newd;
return (1);
}
