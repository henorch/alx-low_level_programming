#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- I initialize all struct parameter
 * @d: Initialize this dog
 * @name: This dog is called poppy
 * @age: this dog is 3.5 years old
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
