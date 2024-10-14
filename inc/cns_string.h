#ifndef CNS_STRING_H
# define CNS_STRING_H

# include <stdio.h>
# include <stdlib.h>

char    *cns_strcpy(char *dst, const char *src);
char    *cns_strncpy(char *dst, const char *src, size_t n);
size_t  cns_strlcpy(char *dst, const char * src, size_t size);
char	*cns_strdup(const char *s);
int		cns_strcmp(const char *s1, const char *s2);
int		cns_strncmp(const char *s1, const char *s2, size_t n);
char	*cns_strchr(const char *s, int c);
char	*cns_strrchr(const char *s, int c);
char    *cns_strstr(const char *haystack, const char *needle);
size_t	cns_strlen(const char *str);
char	*cns_strtrim(const char *s, const char *set);
char    *cns_substr(const char *str, unsigned int start, size_t len);

#endif