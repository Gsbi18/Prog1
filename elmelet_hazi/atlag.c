#include <stdio.h>
#include "prog1.h"
#include <stdlib.h>

#define INITIAL_CAPACITY 10
#define MULTIPLIER 1.5

typedef struct
{
    int *elems;   // dinamikusan lefoglalt tömb mérete
    int length;   // a betett elemek száma
    int capacity; // a tömb fizikai kapacitása
                  // capacity >= length
} DynArray;
void mem_error_exit()
{
    fprintf(stderr, "Error: cannot allocate memory");
    exit(1);
}
DynArray *da_create()
{
    DynArray *result = malloc(sizeof(DynArray));
    if (result == NULL)
    {
        mem_error_exit();
    }
    result->elems = malloc(INITIAL_CAPACITY * sizeof(int));
    if (result->elems == NULL)
    {
        mem_error_exit();
    }
    result->length = 0;
    result->capacity = INITIAL_CAPACITY;

    return result;
}
void da_append(DynArray *self, int data)
{
    if (self->length == self->capacity)
    {
        int new_capacity = (int)(MULTIPLIER * self->capacity);
        self->elems = realloc(self->elems, new_capacity * sizeof(int));
        if (self->elems == NULL)
        {
            mem_error_exit();
        }
        self->capacity = new_capacity;
    }
    self->elems[self->length] = data;
    self->length += 1;
}
void *da_destroy(DynArray *self)
{
    free(self->elems);
    free(self);
    return NULL;
}

int main()
{
    DynArray *li = da_create();
    FILE *fp = fopen("numbers.txt", "r");
    int data;
    while (fscanf(fp, "%d", &data) == 1)
    {
        da_append(li, data);
    } 
    fclose(fp);
    double sum = 0;
    for (int i = 0; i < li->length; i++)
    {
        sum = sum + li->elems[i];
    }
    printf("A számok átlaga: %.2lf\n", sum / li->length);
    li = da_destroy(li);
    return 0;
}