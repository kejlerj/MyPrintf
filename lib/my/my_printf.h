/*
** EPITECH PROJECT, 2017
** my_printf.h
** File description:
** header
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#define	NB_OPTIONS	12

#include "my.h"
#include <stdarg.h>

void	my_printf_d(va_list list);
void	my_printf_s(va_list list);
void	my_printf_c(va_list list);
void	my_printf_S(va_list list);
void	my_printf_b(va_list list);
void	my_printf_p(va_list list);
void	my_printf_o(va_list list);
void	my_printf_x(va_list list);
void	my_printf_X(va_list list);
void	my_printf_u(va_list list);
void	my_printf(const char *str, ...);

#endif
