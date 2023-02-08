#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void err_read(char *s);
static ssize_t read_content(char *source, char **buffer, int desc);
void cp_err(char *content, char *buffer);
static void cp(char *content, int dest, char *buffer, int length);


#endif
