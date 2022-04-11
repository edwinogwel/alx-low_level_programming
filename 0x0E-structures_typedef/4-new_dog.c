#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: str name
 * @age: float age
 * @owner: str owner's name
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogi
	int i, j, k;
	char *nCopy, *oCopy;

	dogi = malloc(sizeof(struct dog));
	if (dogi == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	nCopy = malloc(sizeof(char) * i + 1);	/* store a copy of name */
	if (nCopy == NULL)
	{
		free(dogi);
		return (NULL);
	}
	oCopy = malloc(sizeof(char) * j + 1); /* store a copy of owner */
	if (oCopy == NULL)
	{
		free(nCopy);
		free(dogi);
		return (NULL);
	}
		/* copy name and owner */
	for (k = 0; k <= i; k++)
		nCopy[k] = name[k];
	for (k = 0; k <= j; k++)
		oCopy[k] = owner[k];

	dogi->name = nCopy;
	dogi->age = age;
	dogi->owner = oCopy;

	return (dogi);
}
