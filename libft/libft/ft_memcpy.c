/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:38:50 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 16:23:41 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*uchardst;
	const unsigned char	*ucharsrc;
	size_t				i;

	if (!dst && !src)
		return (0);
	i = 0;
	uchardst = (unsigned char *) dst;
	ucharsrc = (const unsigned char *) src;
	while (i < n)
	{
		uchardst[i] = ucharsrc[i];
		i++;
	}
	return (dst);
}

/*int main(void)
{
   char src[5] = "\0";
   char dst[5] = "\0";
   //printf("%s\n", memcpy(dst, src, 4)); // original
   //printf("%s\n", dst); // hola               
   printf("%s\n", ft_memcpy(dst, src, 8)); // mine
   printf("%s\n", dst); 
   printf("%s\n", src); 
   return (0);
}*/