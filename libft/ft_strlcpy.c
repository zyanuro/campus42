/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:27:35 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/23 16:26:15 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
    if (dstsize == 0)
        return ft_strlen(src);

    size_t src_len = 0;
    while (src[src_len] != '\0')
        src_len++;

    size_t counter = 0;
    while (counter < dstsize - 1 && src[counter] != '\0')
    {
        dst[counter] = src[counter];
        counter++;
    }
    if (dstsize > 0)
        dst[counter] = '\0';

    return src_len;
    
}

/*int main()
{
    char src1[] = "Esta es una cadenamuy larga que será truncada";
    char dest1[20]; // Tamaño del buffer de destino
    
    size_t len_src = strlcpy(dest1, src1, sizeof(dest1));          
    printf("Cadena copiada: %s\n", dest1);
    printf("Tamaño de la cadena truncada: %zu\n", len_src);

    char src[] = "";
    char dest[20]; // Tamaño del buffer de destino
    

    size_t copied = ft_strlcpy(dest, src, sizeof(dest));
    printf("Cadena copiada: %s\n", dest);
    printf("Tamaño de la cadena truncada: %zu\n", copied);
    
    return 0;
} */