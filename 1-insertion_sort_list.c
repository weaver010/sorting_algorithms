#include "sort.h"
/**
 *swap_n - swap
 *@n: n
 *@l:l
 *Return:c
 */
listint_t *swap_n(listint_t *n, listint_t **l)
{
listint_t *per = n->prev, *c = n;

per->next = c->next;
if (c->next)
{
c->next->prev = per;
}
c->next = per;
c->prev = per->prev;
per->prev = c;
if (c->prev)
{
c->prev->next = c;
}
else
{
*l = c;
}
return (c);
}
/**
 * insertion_sort_list -sorts
 * @list: Dobule linked list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *n;

if (list == NULL || (*list)->next == NULL)
{
return;
}
n = (*list)->next;
while (n)
{
while ((n->prev) && (n->prev->n > n->n))
{
n = swap_n(n, list);
print_list(*list);
}
n = n->next;
}
}

