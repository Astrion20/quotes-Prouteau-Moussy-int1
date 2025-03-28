// quotes.h
#ifndef QUOTES_H
#define QUOTES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUOTES 100

void print_quote(char ** quotes, int index);
void print_random_quote(char ** quotes);
void add_quote(char ** quotes, char* quote);
char** create_quotes_table(int n, char** quotes);


#endif