#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H
/**
 * struct dog - my new structure
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: this is my first structure in ALX
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
