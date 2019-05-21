/*
** EPITECH PROJECT, 2017
** test_space_presence
** File description:
** my_printf
*/

#include <string.h>
#include <unistd.h>
#include "my.h"

int testspacepresence(const char* format, int i)
{
	if (format[i] == ' ')
		my_putchar(' ');
	return (1);
}
