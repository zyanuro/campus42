/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:32:41 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/26 19:29:19 by ancuesta         ###   ########.fr       */
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

/*int	main(void)
{
	char		destino[] = "Hola ";
	const char	fuente[] = "Mundo";
	size_t		dest_size;
	size_t		resultado;

	dest_size = 3;
	resultado = ft_strlcat(destino, fuente, dest_size);

    printf("La cadena concatenada es: %zu\n", resultado);		
	printf("La cadena concatenada es: %s\n", destino);
	
	return (0);
}*/

/*size_t	ft_strlcat(char *dest, const char *src, size_t dstsize) {
    size_t dstlen = 0;
    size_t srclen = 0;
    size_t i = 0;
    
    while (dest[dstlen] != '\0')
        dstlen++;
    
    while (src[srclen] != '\0')
        srclen++;
    
    if (dstsize == 0)
        return srclen;
    
    //size_t available = dstsize - dstlen - 1;
    
    while (src[i] != '\0') {
        dest[dstlen + i] = src[i];
        i++;
    }
    
    dest[dstlen + i] = '\0';    
    return dstlen + srclen;
}

int	main(void)
{
	char		destino[] = "lorem ipsum dolor sit amet - ";
	const char	fuente[] = "abcdefghi";
	size_t		dest_size;
	size_t		resultado;

	dest_size = 5;
	resultado = ft_strlcat(destino, fuente, dest_size);
		
	printf("La cadena concatenada es: %s\n", destino);
	
	return (0);
}*/