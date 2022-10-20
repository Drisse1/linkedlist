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

struct node	*del_last(struct node *head)
{
	struct node	*temp;
	struct node	*temp2;

	if (head == NULL)
		printf("list already empty!");
	else if (head->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		temp = head;
		temp2 = head;
		while (temp->link != NULL)
		{
			temp2 = temp;
			temp = temp->link;
		}
		temp2->link = NULL;
		free(temp);
		temp = NULL;
	}
	return (head);
}

int	main(void)
{
	struct node	*head;
	struct node	*ptr;

	head = del_last(head);
    ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}
