/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:59:37 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/30 12:26:42 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    i = ft_strlen(s);
    printf("%d\n", i);
    c = (char)c;
    if (c == '\0')
        return  ((char *)&s[ft_strlen(s)]);
    while (s[i] >= 0)
    {
        if (s[i] == c)
        return ((char *)&s[i]);

        i--;
    }
    return  (NULL);
}

/*int main(void)
{
    char str[] = "testing";
    char character = 'i';
    char *result = ft_strchr(str, character);
    if (result != NULL)
        printf("Resultado: %s\n", result); // Imprime la cadena desde el carácter encontrado
    else
        printf("El carácter no se encontró en la cadena.\n");
    return (0);
}*/