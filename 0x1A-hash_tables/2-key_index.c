#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash;
    unsigned long int index;

    /* Compute the hash code of the key using hash_djb2 */
    hash = hash_djb2(key);
    /* Reduce the hash code to an index using modulo */
    index = hash % size;
    /* Return the index */
    return (index);
}
