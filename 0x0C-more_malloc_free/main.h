#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * File: main.h
 * Auth: Belove Olusola
 * Desc: Header file containing declarations for all functions
 *       used in the 0x0C-more_malloc_free.
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
