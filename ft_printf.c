#include "ft_printf.h"

int	str_identifier(char str, va_list arguments)
{
	if (str == 'c')
		return (ft_putchar(va_arg(arguments, int)));
}

int	ft_printf(char const *s, ...)
{
	va_list arguments; //crear funcion variadica
	int i; //crear variable iteradora
	int storage; //crear variable de almacenamiento

	i = 0; //asignar valor a variable iteradora en 0
	storage = 0; //asignar valor a variable de almacenamiento en 0
	va_start(arguments, s); //inicializar funcion variadica
	while (s[i]) //iterar sobre la cadena de caracteres
	{
		if (s[i] == '%') //si en la iteracion encontramos '%'
		{
			storage += str_identifier(s[i + 1], arguments); //almacenamos y sumamos en almacenamiento la conversion en base a la siguiente posicion y la funcion variadica
			i++;
		}
		else //mientras no se encuentre el '%'
			storage += ft_putchar(s[i]); //almacenamos y sumamos el caracter distinto
		i++; //sumamos a la siguiente posiciones
	}
	va_end(arguments); //terminamos la funcion variadica
	return (storage); //retornamos lo que tengamos en el almacenamiento
}