#include <stdio.h>
#include <stdlib.h>

typedef char *string;
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

void da_clear(DynArray *self)
{
    free(self->elems);
    free(self);
    self->length = 0;
    self->capacity = INITIAL_CAPACITY;
}

void *da_destroy(DynArray *self)
{
    free(self->elems);
    free(self);
    return NULL;
}
void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", tomb[i]);
    }
}
int main()
{
    DynArray *li = da_create();
    int data;
    int i = 0;
    while (i < 10)
    {
        i++;
        da_append(li, i);
    }
    puts("Eredeti tartalom: \n \n");
    kiir(li->length, li->elems);
    da_clear(li);
    puts("\n \ntorolt:");
    kiir(li->length, li->elems);

    puts("\n ujra irt:");
    for (int i = 0; i < 10; i++)
    {
        li->elems[i] = i;
    }
    kiir(li->length, li->elems);

    li = da_destroy(li);
    return 0;
}