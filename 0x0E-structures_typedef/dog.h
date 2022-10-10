#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure that shows different members.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of the dog.
 *
 * Description: This structure defines attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
