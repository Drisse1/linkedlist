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

	head = del_first(head);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}
