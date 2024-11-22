#pragma once
#include <stdlib.h>
#include <string>

struct File 
{
    char *path, *name;
};

struct File *create_file(char path[], char name[]);

void free_file(struct File *file);
