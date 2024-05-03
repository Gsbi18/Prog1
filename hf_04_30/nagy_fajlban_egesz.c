#include <stdio.h>
#include "../prog1.h"
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
void sort_asc(DynArray *self)
{
    for (int i = 0; i <  self->length- 1; i++)
    {
        for (int j = 0; j < self->length - i - 1; j++)
        {

            if (self->elems[j] > self->elems[j + 1])
            {
                int tmp = self->elems[j];
                self->elems[j] = self->elems[j + 1];
                self->elems[j + 1] = tmp;
            }
        }
    }
}

int main(int argc, string argv[])
{
    DynArray *li = da_create();
    string file_name=argv[1];
    FILE *fp = fopen(file_name, "r");
    int data;
    while (fscanf(fp, "%d", &data) == 1)
    {
        da_append(li, data);
    } 
    fclose(fp);
    double sum = 0;
    sort_asc(li);
    for (int i = 0; i < li->length; i++)
    {
       printf("%d ",li->elems[i]);
    }
    li = da_destroy(li);
    return 0;
}