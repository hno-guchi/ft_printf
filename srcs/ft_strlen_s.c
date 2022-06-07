#include "ft_printf.h"

size_t	ft_strlen_s(char *s)
{
	size_t	len;

	len = 0;
	if (s == NULL)
		return (0);
	while (s[len] != '\0')
		len += 1;
	return (len);
}
