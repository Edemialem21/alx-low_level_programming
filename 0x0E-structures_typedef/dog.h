#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - theh dog attributes
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the this dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;
#endif
