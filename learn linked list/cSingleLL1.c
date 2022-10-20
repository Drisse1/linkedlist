#include <stdio.h>
#include <stdlib.h>

/*
    How to create a node of the list?
*/
struct	node
{
	int			data;
	struct node	*link;
};

int	main(void)
{
	struct node	*head = malloc(sizeof(struct node));

	head->data = 45;
	head->link = NULL;

	/*
		head = malloc(sizeof(struct node));
		head->data = 98;
		head->link = NULL;

		There is some problem with this code above.
			=> Head is now pointing o the second node.
			=> Now there is no way to access the first node of the list.
				we have lost the reference of the first node.

		so what is the solution?
			=> we will create another pointer wich will point to the second node. 
	*/
	struct node *current = malloc(sizeof(struct node));
	current->data = 98;
	current->link = NULL;
	head->link = current;
	/*
		The last line above we update the link part of the first node so that can
		point to the second node.
	*/
	return (0);
}
