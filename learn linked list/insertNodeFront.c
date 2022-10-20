#include <stdio.h>
#include <stdlib.h>

/*
        =>   Inserting a node at the Beginning  <=
*/

struct	node
{
	int			data;
	struct node	*link;
};

struct node	*add_beg(struct node *head, int d)
{
	struct node	*ptr;

	ptr = malloc(sizeof(struct node));
	ptr->data = d;
	ptr->link = NULL;
	ptr->link = head;
	head = ptr;
	return (head);
}
