#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for structure variable dog_t
 * @d: pointer to struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)	/* if truthy */
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
