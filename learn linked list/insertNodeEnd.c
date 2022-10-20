#include <stdio.h>
#include <stdlib.h>

/*
        =>   Inserting a node at the end  <=
*/

struct	node
{
	int			data;
	struct node	*link;
};

void	add_at_end(struct node *head, int data)
{
	struct node	*ptr;
	struct node	*temp;

	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	while (ptr->link)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}
