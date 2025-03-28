// quotes.c
#include "quotes.h"
int nbQuotes = 0;

char** create_quotes_table(){
    char** quotes_table = (char**)malloc(sizeof(char*) * 100);
    FILE *file = fopen("../quotes_table.txt", "r");
    char line[256];
    if (file != NULL){
      printf("File opened\n");
      while (fgets(line, sizeof(line), file)){
        nbQuotes++;
        printf("%s", line);
        quotes_table[nbQuotes] = (char*) malloc(sizeof(char) * sizeof(line));
      }
    }

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