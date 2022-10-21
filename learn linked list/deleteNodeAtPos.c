#include <stdio.h>
#include <stdlib.h>

/*
        =>   Deleting the last node of the single linked list <=
*/

struct	node
{
	int			data;
	struct node	*link;
};

void	del_pos(struct node **head, int pos)
{
	struct node	*current;
	struct node	*previous;

	current = head;
	previous = head;
	if (!head)
		printf("list is already empty!");
	else if (pos == 1)
	{
		*head = current->link;
		free(current);
		current = NULL;
	}
	else
	{
		while (pos != 1)
		{
			previous = current;
			current = current->link;
			pos--;
		}
		previous->link = current->link;
		free(current);
		current = NULL;
	}
}

int	main(void)
{
	struct node	*head;
	struct node	*ptr;

	del_pos(&head, 2);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}
