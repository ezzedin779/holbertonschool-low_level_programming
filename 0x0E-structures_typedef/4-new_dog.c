#include "dog.h"
/**
*new_dog - pointer to the new dog
*@name: the name of the new dog (pointer to char)
*@age: the age of the new dog (float)
*@owner: owner of the new dog (pointer to char)
*Return: pointer to the new dog (pointer to structure)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t dog, *d = &dog;

d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
