#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int strleng(const char *str);
char *strcopy(char *destin, const char *source);
void free_array(int **array, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int word_len(const char *str);
char *next_word(const char *str);
int count_words(const char *str);

#endif
