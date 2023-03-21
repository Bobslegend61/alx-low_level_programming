#ifndef _DOG_H_
#define _DOG_H_

/**
* dog_t - Typedef for struct dog 
*/
typedef struct dog dog_t;

/**
* struct dog - A dog struct
* @name: The name of the dog
* @age: The age of the dog
* @owner: The name of the owner of the dog 
*
* Description: This defines a struct type for a dog.
*/
struct dog
{
	char* name;
	float age;
	char* owner;
};

void init_dog(struct dog*, char* name, float age, char* owner);
void print_dog(struct dog* d);
dog_t* new_dog(char* name, float age, char* owner);
void free_dog(dog_t* d);

#endif

