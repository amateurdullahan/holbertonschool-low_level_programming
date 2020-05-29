#include "hash_tables.h"

/**
 * hash_table_print - print all key/value pairs
 * @ht: hash table to print
 *
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *mauve;
unsigned long int idx = 0, check = 0;

if (ht == NULL)
return;
printf("{");
for (idx = 0; idx < ht->size; idx++)
{
mauve = ht->array[idx];
while (mauve != NULL)
{
if (check)
printf(", ");
printf("\'%s\': ", mauve->key);
printf("\'%s\'", mauve->value);
check = 1;
mauve = mauve->next;
}
}
printf("}\n");
}
