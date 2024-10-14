#include ".\inc\cns_str_cmp.h"

char	*cns_strchr(const char *s, int c)
{
	do
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
	} 
	while (*s++);

	return (NULL);
}
