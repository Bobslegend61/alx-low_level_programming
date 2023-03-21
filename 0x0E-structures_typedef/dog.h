#ifndef DOG_H
#define DOG_H

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
	char* owner;
	float age;
};

/**
* dog_t - Typedef for struct dog 
*/
typedef struct dog dog_t;


void init_dog(struct dog*, char*, float, char*);
void print_dog(struct dog*);
dog_t* new_dog(char*, float, char*);
void free_dog(dog_t*);

#endif // #ifndef DOG_H

