#include <unistd.h>
#include <stdarg.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int count;
	
	count = 0;
	if(!s[count])
		return (NULL);
	while(s[count])
		ft_putchar(s[count++]);
}

void	ft_hexa(long long int nbr, int base, int *len)
{
	char *hexa;
	
	hexa = "0123456789abcdef";
	if (nbr < 0)
	{
		nbr *= -1;
		*len += ft_putchar('-');
	}
	if (nbr >= base)
		ft_hexa((nbr / base), base, len);
	*len += ft_putchar(ft_hexa[nbr % base]);
}

int	ft_printf(const char *format, ...)
{
	va_list		ptr;
	
	va_start(ptr, format);
	while (*format)
	{
		if ((*format == '%') && *(format + 1))
		{
			format++;
			if(*format == 's')
				ft_putstr(va_arg(ptr, char *));
			else if (*format == 'd')
				ft_hexa((long long int)va_arg(ptr, int), 10);
			else if (*format == 'x')
				ft_hexa((long long int)va_arg(ptr, unsigned int), 16);
		}
		else
			ft_putchar(format);
		format++;
	}
	return (va_end(ptr));
}
