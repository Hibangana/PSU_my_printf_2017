/*
** EPITECH PROJECT, 2017
** my_h_
** File description:
** my_printf
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

void case_cap_s(char *str);
void case_cap_c(char str);
void nullpointertest(long nb);
void put_hexa_or_oct(unsigned int nb,unsigned b);
void put_hexa_for_long(long nb, unsigned b);
void put_hexa_cap(unsigned int nb,unsigned int b);
void my_put_nbr_binary(unsigned int nb);
int removespace(const char* format,int i);
int case_check(const char* format, va_list list,int i);
int case_check_one(const char* format, va_list list,int i);
int case_check_two(const char* format, va_list list,int i);
int case_check_three(const char* format, va_list list,int i);
int testspacepresence(const char* format, int i);
void my_putchar(char c);
unsigned int my_put_nbr_unsigned(unsigned int nb);
int my_strlen(char const *str);
int my_printf(const char* format,...);
long my_put_nbr(long nb);
int my_putstr(char const *str);

#endif
