#include ".\inc\cns_str_utl.h"

static int	is_in_set(char c, const char *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*cns_strtrim(const char *s, const char *set)
{
	size_t	start = 0;
	size_t	len = cns_strlen(s) - 1;
	char	*new_str;
	
	while (is_in_set(s[start], set))
		start++;
	while (is_in_set(s[len], set))
		len--;
	len -= start;
	
	new_str = cns_substr(s, (start + 1), (len + 1));
	return (new_str);
}
