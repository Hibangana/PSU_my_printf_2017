/*
** EPITECH PROJECT, 2017
** Modulo cap S
** File description:
** my_printf
*/

#include <string.h>
#include "my.h"

void lessthantenc(char str)
{
	int a = 0;

	if (str < 8) {
		my_putchar(92);
		my_putstr("00");
		a = (str);
		put_hexa_or_oct(a,8);
	}
}

void lessthanhundredc(char str)
{
	int a = 0;

	if (str > 8 && str < 64) {
		my_putchar(92);
		my_putstr("0");
		a = (str);
		put_hexa_or_oct(a,8);
	}
}

void morethanhundredc(char str)
{
	int a = 0;
	if (str > 64) {
		my_putchar(92);
		a = (str);
		put_hexa_or_oct(a,8);
	}
}

void case_cap_c(char str)
{
	if (str < 32 || str > 126) {
		lessthantenc(str);
		lessthanhundredc(str);
		morethanhundredc(str);
	}
	else
		my_putchar(str);
}
