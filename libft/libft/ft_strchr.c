/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:44:16 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/30 11:28:33 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    c = (char)c;
    if (c == '\0')
        return  ((char *)&s[ft_strlen(s)]);
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i++;
    }
    return  (NULL);
}

/*int main(void)
{
    char str[] = "testing";
    char character = '\0';
    char *result = ft_strchr(str, character);
    if (result != NULL)
        printf("Resultado: %s\n", result); // Imprime la cadena desde el carácter encontrado
    else
        printf("El carácter no se encontró en la cadena.\n");
    return (0);
}*/