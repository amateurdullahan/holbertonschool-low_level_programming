#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: table to delete
 *
 */

void hash_table_delete(hash_table_t *ht)
{
  hash_node_t *temp, *next;
unsigned long int idx;

if (ht == NULL)
return;
for (idx = 0; idx < (ht->size); idx++)
{
temp = ht->array[idx];
while (temp != NULL)
{
next = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = next;
}
}
free(ht->array);
free(ht);
}
