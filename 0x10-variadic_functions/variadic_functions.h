#ifndef FILE_H
#define FILE_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);

/**
 * struct print_fn - structure 
 * @type: type
 * @printer: pointer
 */
typedef struct printS
{
char *type;
void (*printer)(va_list);
} printS;
#endif
