/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:28:34 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 13:19:52 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	if (!dst && !src)
		return (0);
	counter = 0;
	if (src < dst)
	{
		counter = len;
		while (counter > 0)
		{
			counter--;
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
		}
	}
	else
	{
		counter = 0;
		while (counter < len)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
			counter++;
		}
	}
	return (dst);
}

/*int main(void)
{
   char src[] = "abecedario";
   char dst[10] = "";
   printf("%s\n", memmove(dst, src, 4)); // original
   printf("%s\n", dst); // hola               
   printf("%s\n", ft_memmove(dst, src, 8)); // mine
   printf("%s\n", dst); 
   printf("%s\n", src); 
   return (0);
}*/