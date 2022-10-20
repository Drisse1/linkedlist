#include <stdio.h>
#include <stdlib.h>

/*
			=>  traversing a single linked list  <=
					(printing the data)
*/

struct	node
{
	int			data;
	struct node	*link;
};

void	print_data(struct node *head)
{
	if (head == NULL)
		printf("Linked list is empty");
	struct node	*ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
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
	print_data(head);
	return (0);
}