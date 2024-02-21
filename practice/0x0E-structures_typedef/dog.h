#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - Dog structure
 *
 * @name: pointer to dog name;
 * @owner: porinter to dog owner;
 * @age: dog age
*/
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
