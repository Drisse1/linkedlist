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

/*
	deleting last node with two pointer
*/

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

/*
	deleting last node with a single pointer
*/

void	del_last_sg(struct node *head)
{
	struct node	*temp;

	if (head == NULL)
	{
		printf("list is already empty");
	}
	else if (head->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		temp = head;
		while (temp->link->link != NULL)
		{
			temp = temp->link;
		}
		free(temp->link);
		temp->link = NULL;
	}
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
	head->link = NULL;
	current->data = 98;
	current->link = NULL;
	head->link = current;
	current2->data = 3;
	current2->link = NULL;
	current->link = current2;
	head = del_last(head);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}
