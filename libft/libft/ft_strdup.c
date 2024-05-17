#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char    *ft_strdup (const char *s1)
{
    char *copy;
    size_t count_s1;
    size_t count_copy;
    size_t mem;
    size_t length_s1;

    length_s1 = ft_strlen(s1);
    count_s1 = 0;
    count_copy = 0;
    mem = (length_s1 + 1) * sizeof(char);
    if (s1 == NULL)
        return (NULL);
    copy = (char *)malloc(mem);
    if (copy == NULL)
        return (NULL);
    while (s1[count_s1] != '\0')
    {
        copy[count_copy] = s1[count_s1];
        count_copy++;
        count_s1++;
    }
     copy[count_copy] = '\0';
     return (copy);
}