#ifndef LINED
#define LINED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc*ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_s;

size_t print_list(const list_s *h);
size_t list_len(const list_s *h);
list_s *add_node(list_s **head, const char *str);
list_s *add_node_end(list_s **head, const char *str);
void free_list(list_s *head);

#endif /* LINED */

