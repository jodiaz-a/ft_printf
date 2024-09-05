#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printf(char const *, ...);
int	str_identifier(char str, va_list arguments);

#endif