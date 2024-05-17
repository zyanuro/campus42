/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:16:03 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/08 18:25:30 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    while (n > 0)
    {
        if (*(unsigned char *)s1 != *(unsigned char *)s2)
        {
            return (*(unsigned char *)s1 - *(unsigned char *)s2);
        }
        s1++;
        s2++;
        n--;
    }
        return (0);
}

/*int main(void)
{
   char src[5] = "Zbc";
   char dst[5] = "abc";
   printf("%d\n", ft_memcmp(dst, src, 4)); 
   printf("%s\n", dst); 
   printf("%s\n", src); 
   return (0);
}*/