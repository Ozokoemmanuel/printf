#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

int _printf(const char *format, ...);
int isDigit(char);
int isAlpha(char);
int setFlags(char *fmt, int *flags, int j, va_list *args);
int print_string(char *, int *, int);
char *rot13(char *s);
int get_index(char *, char);
int _vprintf(const char *, va_list);
int _printf(const char *, ...);
void signedNumberToString(int64_t, int, char *, char *);
void unsignedNumberToString(uint64_t number, int base, char *buf, char *format);
int _putchar(char);

#endif
