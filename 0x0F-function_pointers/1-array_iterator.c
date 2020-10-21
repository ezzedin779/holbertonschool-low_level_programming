#include "function_pointers.h"
/**
*array_iterator - executes action on every part in the array
*@array: pointer to an array
*@size: the size of an array
*@action: funtion pointer to the action to do
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
