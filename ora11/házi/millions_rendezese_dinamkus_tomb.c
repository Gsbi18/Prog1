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
void da_append(DynArray *self, int data) // Adat hozzáadása //data lesz az az adat ami hozzá akarunk adni.
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

void quicksort(int a[], int bal, int jobb)
{
    int x, temp;
    int i, j;

    i = 0;
    j = jobb;
    x = a[(bal + jobb) / 2];
    while (i <= j)
    {
        while (a[i] < x)
            ++i;
        while (a[j] > x)
            --j;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            /* */
            ++i;
            --j;
        }
    }

    if (bal < j)
        quicksort(a, bal, j);
    if (i < jobb)
        quicksort(a, i, jobb);
}

int main()
{
    DynArray *li = da_create();
    FILE *fp = fopen("millions.txt", "r");
    int data;
    char line[100];

    while (fgets(line, 1000, fp) != NULL)
    {
        int be = atoi(line);
        da_append(li, be);
    }
    fclose(fp);
    quicksort(li->elems, 0, li->length - 1);
    for (int i = 0; i < li->length; i++)
    {
        printf("%d\n", li->elems[i]);
    }

    li = da_destroy(li);
    return 0;
}