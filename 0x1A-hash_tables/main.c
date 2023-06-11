#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(5024);
    char * type = ht;
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
