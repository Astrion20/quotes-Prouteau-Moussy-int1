// quotes.c
#include "quotes.h"
int nbQuotes = MAX_QUOTES;

char** create_quotes_table(int n, char** quotes){
    char** quotes_table = (char**)malloc(sizeof(char*) * n);
    return quotes_table;
}

void print_quote(char ** quotes, int index) {
    printf("%s\n", quotes[index]);
}

void print_random_quote(char ** quotes) {
    int index = rand() % MAX_QUOTES;
    print_quote(quotes, index);
}

void add_quote(char ** quotes, char* quote) {

}

void remove_quote(char ** quotes, char* quote) {

}