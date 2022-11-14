#ifndef MAIN_H
#define MAIN_H

struct dog *dog_t(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog_t *new_dog(char *name, float age, char *owner);
void free_dog(struct dog_t *d);

#endif
