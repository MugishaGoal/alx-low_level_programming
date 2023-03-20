#ifndef DOG_H
#define DOG_H

/*
 * struct dog - a dog information
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: a struct that defines a dog's information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
