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

struct node *del_list(struct node *head)
{
	struct node	*temp;

	temp = head;
	while (temp)
	{
		temp = temp->link;
		free(head);
		head = temp;
	}
	return (head);
}

int	main(void)
{
	struct node	*head;

	head = del_list(head);
	if (head == NULL)
		printf("Linked list deleted succesfully");
	return (0);
}
