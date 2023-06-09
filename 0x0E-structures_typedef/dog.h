#ifndef DOG_H
#define DOG_H

/**
*dog_t - this is the typedef for struct dog
*/
typedef struct dog dog_t;

/**
*struct dog - has elements that descibes a dog
*
*@name: dog's name
*
*@age: dog's age
*
*@owner: dog's owner
*
*Description: this is a structure called 'dog'
*and it contains details about a dog like it's name, age and owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
