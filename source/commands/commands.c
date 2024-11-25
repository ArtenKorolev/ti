#include <stdio.h>
#include "include/commands/commands.h"
#include "include/file/file.h"
#include "commands.h"

const char *read_file_content(struct File *file) 
{
    FILE *opened_file = fopen(file->path, "r");
    
    if (opened_file == NULL) 
    {
        return NULL;
    }

    char file_content[256];
    char current_char;
    int i = 0;

    while ((current_char = fgetc(opened_file)) != EOF) 
    {
        file_content[i++] = current_char;
    }
    file_content[i] = '\0';

    fclose(opened_file);

    return file_content;
}

int count_file_lines(struct File *file)
{
    FILE *opened_file = fopen(file->path, "r");
    
    if (opened_file == NULL) 
    {
        return NULL;
    }

    int lines = 0;
    char current_char;

    while ((current_char = fgetc(opened_file)) != EOF) 
    {
        if (current_char == '\n') 
        {
            lines++;
        }
    }

    return lines;
}
