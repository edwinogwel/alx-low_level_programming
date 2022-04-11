#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure definition of a dog
 * @name: str name
 * @age: float age
 * @owner: str owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;	/* dog_t -> structure variable */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
