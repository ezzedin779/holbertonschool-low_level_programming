#include <stdlib.h>
#include "dog.h"
/**
*free_dog - free the dog
*@d: the dog
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}