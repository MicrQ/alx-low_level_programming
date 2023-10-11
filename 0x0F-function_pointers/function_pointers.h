#ifndef _FUNC_PTR
#define _FUNC_PTR

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
