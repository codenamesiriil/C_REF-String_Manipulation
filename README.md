# String Copy

The `cns_strcpy`, `cns_strncpy`, and `cns_strlcpy` functions are simple implementations of the GNU C Standard Library functions, respectively `strcpy`, `strncpy`, and `strlcpy`, found under the header `<string.h>` and `<bsd/string.h>`.

## cns_strcpy

```c
char *cns_strcpy(char *dst, const char *src);
```

The `cns_strcpy` function copies the *src* string to the *dst* string, including the termination character, provided that the destination string is big enough to accommodate the entirety of the source string. It's up to the developer to ensure that *dst* has enough length to allow for the complete copy of *src*. If *dst* is not big enough, the behavior is undefined, which may lead to buffer overflows and potential security vulnerabilities.

> For more information about the GNU C Standard Library implementation of `strcpy`, visit the [strcpy(3) — Linux manual page](https://www.man7.org/linux/man-pages/man3/strcpy.3.html).

## cns_strncpy

```c
char *cns_strncpy(char *dst, const char *src, size_t n);
```

The `cns_strncpy` function is similar to `cns_strcpy` but allows specifying the maximum number of characters to copy from the *src* string. This can help prevent buffer overflows by limiting the number of characters copied to the destination string. However, it's important to note that if *src* is shorter than ***[size_t](https://github.com/codenamesiriil/C_REF-Wiki/wiki/size_t)*** *n*, the remainder of *dst* will be padded with null bytes. If, on the other hand, *src* is larger than ***[size_t](https://github.com/codenamesiriil/C_REF-Wiki/wiki/size_t)*** *n*, the copied string will not be null-terminated.

> For more information about the GNU C Standard Library implementation of `strncpy`, visit the [stpncpy(3) — Linux manual page](https://www.man7.org/linux/man-pages/man3/strncpy.3.html).

## cns_strlcpy

```c
size_t *cns_strlcpy(char *dst, const char *src, size_t len);
```

The `cns_strlcpy` function copies up to ***[size_t](https://github.com/codenamesiriil/C_REF-Wiki/wiki/size_t)*** *len-1* characters from the *src* string to the *dst* string, and null-terminates the result. It ensures that the destination string is null-terminated, which helps avoid buffer overflows and truncation issues. The function returns the total length of the string it tried to create, which means the length of *src*. This can be used to detect truncation by comparing the returned length with the size of the destination buffer.

> For more information about the GNU C Standard Library implementation of `strlcpy`, visit the [strlcpy(3) - Linux manual page](https://linux.die.net/man/3/strlcpy).

## cns_strdup

```c
char *cns_strdup(const char *s);
```

## Additional Protections

To enhance the robustness of these functions, it is recommended to check if *src* and *dst* are not *null* before performing the copy operation. This can help prevent undefined behavior from dereferencing *null* pointers.

```c
if (!dst || !src)
    return (NULL);
```

**Note:** Checking for *null* adds additional overhead and may impact performance. Use this approach based on your application's needs.

# String Compare

## cns_strcmp

```c
int *cns_strcmp(const char *s1, const char *s2);
```

## cns_strncmp

```c
int *cns_strncmp(const char *s1, const char *s2, size_t n);
```

## cns_strchr

```c
char *cns_strchr(const char *s, int c);
```

## cns_strrchr

```c
char *cns_strrchr(const char *s, int c);
```

## cns_strstr

```c
char    *cns_strstr(const char *haystack, const char *needle);
```