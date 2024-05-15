/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:35:18 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/09 15:33:05 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    i = 0;
    j = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < len)
    {
        if (haystack[i] == needle[j])
        {
            while (haystack[i + j] == needle[j] && i + j < len)
            {
                if (needle[j + 1] == '\0')
                    return ((char *)haystack + i);
                j++;
            }
            j = 0;
        }
        i++;
    }
    return (NULL);
}

/*int main(void)
{  
     char needle[] = "de";
    char haystack[] = "En un lugar de la mancha...";
    char *result = ft_strnstr(haystack, needle, ft_strlen(haystack));
    if (result != NULL) {
        printf("Cadena encontrada: %s\n", result);
    } else {
        printf("Cadena no encontrada.\n");
    }
    return 0;
}*/