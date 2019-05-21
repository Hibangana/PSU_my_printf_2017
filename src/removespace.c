/*
** EPITECH PROJECT, 2017
** remove_space
** File description:
** my_printf
*/

#include <string.h>
#include "my.h"

int removespace(const char* format,int i)
{
	while(format[i] == ' ')
		i = i + 1;
	return (i);
}
