#include "dog.h"
#include <stdlib.h>
char *cpy(char *dest, char *src);
int length(char *s);
/**
*length - length of a string
*@s: string
*Return: length
*/
int length(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}
/**
*cpy - copy src in dest
*@src: copied
*@dest: destination
*Return: string
*/
char *cpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
*new_dog - i got a new dog
*@name: name of the new dog (string)
*@age: age of the new dog (float)
*@owner: owner of the new dog (string)
*Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * length(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * length(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = cpy(d->name, name);
	d->age = age;
	d->owner = cpy(d->owner, owner);
	return (d);
}
