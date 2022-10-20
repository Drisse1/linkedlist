#include <stdio.h>
#include <stdlib.h>

struct	node
{
	int			data;
	struct node	*link;
};

int	main(void)
{
	struct node	*head = NULL;
	/*
		head pointer is pointing to struct node only.
		that is this pointer can sccess data as well as the link part of node
		basically we call this pointer head because this is the pointer to the first node
		of the list wich we will creat later.
	*/
	head = (struct node *)malloc(sizeof(struct node));
	/*
		in this line we calling the malloc function to allocate memory for struct node.
		that means malloc is helping us to create a node.
		==> casting is not mandatory <==
		here after typecasting, the pointer becomes a pointer to a struct node wich can be
		stored whithin this head pointer. Basically the address will be stored within head pointer.
		that means this head is now capable to access the struct node.
		Now, how it will access?
	*/
	head->data = 45;
	head->link = NULL;
	printf("data of head is: %d", head->data);
	return (0);
}
