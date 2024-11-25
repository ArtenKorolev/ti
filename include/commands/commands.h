#pragma once
#include "./file/file.h"

const char *read_file_content(struct File *file);

void write_content_to_file(struct File *file, const char **content);

int count_file_lines(struct File *file);
