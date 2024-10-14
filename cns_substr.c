#include ".\inc\cns_str_utl.h"

char    *cns_substr(const char *str, unsigned int start, size_t len)
{
    int     i, j;
    char    *new_str;

    new_str = malloc(sizeof(char) * (len + 1));
    if (!new_str)
        return (NULL);
    i = start - 1;
    j = 0;
    while (len--)
    {
        new_str[j] = str[i];
        j++;
        i++;
    }
    new_str[j] = '\0';
    return (new_str);
}
