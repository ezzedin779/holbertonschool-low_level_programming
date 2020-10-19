#ifndef DOG_H
#define DOG_H
/**
*struct dog - structure of dog
*@name: the name of the dog
*@age: how old is he ?
*@owner: who's your owner ?
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
char *cpy(char *dest, char *src);
int length(char *s);
void free_dog(dog_t *d);
#endif
