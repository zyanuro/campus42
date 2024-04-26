/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:50:13 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/26 17:45:09 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    i = 0;
    j = 0;
    while (dst[i] && i < dstsize)
        i++;
    while (src[j] && (i + j + 1) < dstsize)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i < dstsize)
        dst[i + j] = '\0';
    return (i + ft_strlen(src));
}

int	main(void)
{
	char		destino[] = "Hola ";
	const char	fuente[] = "Mundo";
	size_t		dest_size;
	size_t		resultado;

	dest_size = 2;
	resultado = ft_strlcat(destino, fuente, dest_size);
    //resultado = strlcat(destino, fuente, dest_size);
    printf("La cadena concatenada es: %zu\n", resultado);		
	printf("La cadena concatenada es: %s\n", destino);
	
	return (0);
}