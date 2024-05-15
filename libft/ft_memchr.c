/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:20:51 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/08 14:04:22 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;
    char	*str;	

	counter = 0;
	str = (char *)s;
	while (counter < n)
	{
		if ((unsigned char)str[counter] == (unsigned char)c)
			return ((char *)s + counter);
		counter++;
	}
	return (NULL);
}

/*int main(void)
{
    char str[] = "testing";
    char character = '\0';
    char *result = ft_memchr(str, character, 3);
    if (result != NULL)
        printf("Resultado: %s\n", result); // Imprime la cadena desde el carácter encontrado
    else
        printf("El carácter no se encontró en la cadena.\n");
    return (0);
}*/