# 0x19. C - Hash tables

## About

Detailed project on the implementation of:

- Hash functions
- The use of hash tables
- Dealing with collisions

## File Descriptions

| File                      | Prototype                                                                        |
| ------------------------- | -------------------------------------------------------------------------------- |
| `0-hash_table_create.c`   | `hash_table_t *hash_table_create(unsigned long int size);`                       |
| `1-djb2.c`                | `unsigned long int hash_djb2(const unsigned char *str);`                         |
| `2-key_index.c`           | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` |
| `3-hash_table_set.c`      | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`      |
| `4-hash_table_get.c`      | `char *hash_table_get(const hash_table_t *ht, const char *key);`                 |
| `5-hash_table_print.c`    | `void hash_table_print(const hash_table_t *ht);`                                 |
| `6-hash_table_delete.c`   | `void hash_table_delete(hash_table_t *ht);`                                      |
| `100-sorted_hash_table.c` | `shash_table_t *shash_table_create(unsigned long int size);`                     |
|                           | `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`    |
|                           | `char *shash_table_get(const shash_table_t *ht, const char *key);`               |
|                           | `void shash_table_print(const shash_table_t *ht);`                               |
|                           | `void shash_table_print_rev(const shash_table_t *ht);`                           |
|                           | `void shash_table_delete(shash_table_t *ht);`                                    |

**[hash_tables.h](hash_tables.h)** - header file containing all function prototypes and the definitions for types `hash_node_t`, `hash_table_t`, `shash_node_t`, and `shash_table_t`.

### Mandatory

**[0-hash_table_create.c](0-hash_table_create.c)** - function that creates a hash table.

**[1-djb2.c](1-djb2.c)** - hash function that implements the djb2 algorithm.

**[2-key_index.c](2-key_index.c)** - function that returns the index of a key.

**[3-hash_table_set.c](3-hash_table_set.c)** - function that adds an element to the hash table.

**[4-hash_table_get.c](4-hash_table_get.c)** - function that retrieves a value associated with a key.

**[5-hash_table_print.c](5-hash_table_print.c)** - function that prints a hash table.

**[6-hash_table_delete.c](6-hash_table_delete.c)** - function that deletes a hash table.

### Advanced

**[100-sorted_hash_table.c](100-sorted_hash_table.c)** - all functions from mandatory section rewritten for sorted hash tables.
