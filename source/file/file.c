#include "file.h"

struct File *create_file(char path[], char name[]) 
{
    struct File *new_file = (struct File*)malloc(sizeof(struct File));

    if (!new_file) 
    {
        return NULL;
    }

    new_file->path = (char *)malloc(strlen(path) + 1);
    strcpy(new_file->path, name);

    new_file->name = (char *)malloc(strlen(name) + 1);
    strcpy(new_file->path, name);

    return new_file;
}

void free_file(struct File *file)
{
    if (!file) 
    {
        return NULL;
    }

    free(file->name);
    free(file->path);
    free(file);
}
