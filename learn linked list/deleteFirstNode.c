#include <stdio.h>
#include <stdlib.h>

/*
        =>   Deleting the first node of the single linked list <=
*/

struct	node
{
	int			data;
	struct node	*link;
};

struct node	*del_first(struct node *head)
{
	struct node	*temp;

	if (head == NULL)
		printf("List is already emplty!");
	else
	{
		temp = head;
		head = head->link;
		free(temp);
		temp = NULL;
	}
	return (head);
}

int	main(void)
{
	struct node	*head;
	struct node	*ptr;
	struct node	*current;
	struct node	*current2;

	head = malloc(sizeof(struct node));
	current = malloc(sizeof(struct node));
	current2 = malloc(sizeof(struct node));
	head->data = 45;
	current->data = 98;
	head->link = current;
	current2->data = 3;
	current->link = current2;
	current2->link = NULL;
	head = del_first(head);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}
