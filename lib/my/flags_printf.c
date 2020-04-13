/*
** EPITECH PROJECT, 2017
** flags_printf.c
** File description:
** flags of printf
*/

#include "my_printf.h"

void	my_printf_d(va_list list)
{
	my_put_nbr(va_arg(list, int));
}

void	my_printf_s(va_list list)
{
	my_putstr(va_arg(list, char *));
}

void	my_printf_c(va_list list)
{
	my_putchar(va_arg(list, int));
}

void	my_printf_S(va_list list)
{
	my_print_all(va_arg(list, char *));
}

void	my_printf_b(va_list list)
{
	my_putnbr_base(va_arg(list, int), "01");
}

void	my_printf_p(va_list list)
{
	my_putstr("0x");
	my_putnbr_base(va_arg(list, long long), "0123456789abcdef");
}

void	my_printf_o(va_list list)
{
	my_putnbr_base(va_arg(list, int), "01234567");
}

void	my_printf_x(va_list list)
{
	my_putnbr_base(va_arg(list, int), "0123456789abcdef");
}

void	my_printf_X(va_list list)
{
	my_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
}

void	my_printf_u(va_list list)
{
	my_put_nbr(va_arg(list, unsigned int));
}
