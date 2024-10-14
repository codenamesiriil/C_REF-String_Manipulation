#include <stdlib.h>

size_t	cns_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}
