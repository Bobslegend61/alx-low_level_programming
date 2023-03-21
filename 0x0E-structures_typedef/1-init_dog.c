#include "dog.h"

/**
 * init_dog - Function to initialize a struct
 * @d: Struct to initialize
 * @name: The name to give the dog struct
 * @age: The age to give the struct dog
 * @owner: The name of the owner of the struct dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;	
	}
}
