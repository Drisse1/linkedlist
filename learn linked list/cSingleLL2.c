#include <stdio.h>
#include <stdlib.h>

/*
	We need to add third node to our single list.
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

	struct node *current = malloc(sizeof(struct node));
	current->data = 98;
	current->link = NULL;
	head->link = current;
	/*
		For adding the third node to the list there is two methods
		and here is method one:
		struct node	*current2 = malloc(sizeof(struct node));
		current2->data = 3;
		current2->link = NULL;
		current->link = current2;
	*/
	/*
		Before to moving on to method 2.

		=> What does "head->link" Give?
			+> "head->link" gives the address of the first node
				because head is a pointer wich is pointed to the first node of the list.
				end by using this pointer, we can access the link part of it.

		=> What does "head->link->link" Give?
			+> For this we need to understand the meaning behind this
				first of all, what does "head->link" give?
				"head->link" give the address "2000" because when we simply write head
				it means that we are trying to access the content of this head that is "1000"
				so we replace this head by "1000";
				"1000"->operator link means we are trying to get that address "1000" and we are
				accessing thr link part of the node within that address. this is the meaning of "head->link".
				so "head->link" gives the address 2000. we can replace this "head->link" by "2000" and then
				we can easily answer what does this "head->link->link" give?
				as we can replace this "head->link" by "2000". so we can say "2000->link" means we are going
				to the "2000" address and accessing the link part of it.
				so basically, using the head pointer we are accessing the link part of the second node of
				the list.
				so "head->link->link" gives "3000".
				Similarly "head->link->link->link" gives "NULL".

				|1000| ----> |45| 2000 | ----> |98| 3000 | ----> |3| NULL |
				head		 /1000/			   /2000/			 /3000/    <------ address
	*/
	current = malloc(sizeof(struct node));
	current->data = 3;
	current->link = NULL;
	head->link->link = current;
	printf("%d", current->data);
	return (0);
}
