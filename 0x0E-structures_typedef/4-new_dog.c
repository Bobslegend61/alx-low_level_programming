#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* new_dog - Creates a dog of struct dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The name of the owner of the dog
*
* Return: A pointer to the newly created dog
*/
dog_t* new_dog (char* name, float age, char* owner)
{
	dog_t* d = malloc(sizeof(*d));
	
	if (d == NULL)
	{
		free(d);
		exit(2);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return d;
}
