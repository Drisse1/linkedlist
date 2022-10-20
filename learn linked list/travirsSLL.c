#include <stdio.h>
#include <stdlib.h>

/*
				=> Traversing a single linked list <=

	traversing a single linked list means visiting each node of a single linked list
	until the end node is reached.

	|1000| ----> |45| 2000 | ----> |98| 3000 | ----> |3| NULL |
	head		 /1000/			   /2000/			 /3000/    <------ address

	Our job is to calculate the total number of nodes by traversing the linked list.
*/

struct	node
{
	int			data;
	struct node	*link;
};

int	count_of_nodes(struct node *head)
{
	int			count;
	struct node	*ptr;

	count = 0;
	ptr = NULL;
	if (head == NULL)
		return (printf("linked list is empty"), 0);
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	return (count);
}

int	main(void)
{
	struct node	*head;
	struct node	*current;
	struct node	*current2;

	head = malloc(sizeof(struct node));
	current = malloc(sizeof(struct node));
	current2 = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;
	current->data = 98;
	current->link = NULL;
	head->link = current;
	current2->data = 3;
	current2->link = NULL;
	current->link = current2;
	printf("%d", count_of_nodes(head));
	// printf("%d", current->data);
	return (0);
}