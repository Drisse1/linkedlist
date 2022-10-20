#include <stdio.h>
#include <stdlib.h>

struct sPerson
{
	int	age;
};

struct	sPerson	*getNewPerson(const int age)
{
	struct	sPerson	*newPerson = NULL;
	newPerson = malloc(sizeof(struct sPerson));
	newPerson->age = age;
	printf("| created new person at %p |\n", newPerson);
	return (newPerson);
}

void	printPerson(const struct sPerson *person, const char *comment)
{
	if (person == NULL)
		printf("%s is NULL\n", comment);
	else
		printf("| %s: | age: %d | address:%p |\n", comment, person->age, person);
}

int	main(void)
{
	printf("\n\n**  START  **\n\n");
	struct	sPerson *first = NULL;
	struct	sPerson *second = NULL;

	printPerson(first, "first");
	printPerson(second, "second");
	printf("\n");
	first = getNewPerson(125);
	second = getNewPerson(100);
	printf("\n");
	printPerson(first, "first");
	//the first pointer is still pointing to the same address that ponted to it first time
	printPerson(second, "second");
	//the second pointer is still pointing to the same address that ponted to it first time
	printf("\n");
	free(first);
	free(second);
	first = NULL;
	second = NULL;
	/*
		=> in this lesson we create a struct sPerson with one property 'age'.

		=> create a function getNewPerson whith one parameter 'age' that create
			a newPerson pointer who refrence from sPerson structure and allocate a
			dynamic allocation memory for newPerson then we assigned the age of newPerson 
			to age in its parameter after that we print the address thet newPerson pointer pointed to.

		=> create a function printPerson with two parameters person pointer that tike reference of
			the sPerson structure and comment, function check the person pointer if is equal a null
			print the comment otherwise print comment, age of person and address thet person point to.
	*/
	return (0);
}