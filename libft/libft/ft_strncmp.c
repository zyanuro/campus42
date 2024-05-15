/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:22:40 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/30 11:39:33 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

 int    ft_strncmp(const char *s1, const char *s2, size_t n)
 {
    while( *s1 && *s2 && n >0 && *s1 == *s2)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
    return (0);
    
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
 }

/*int main()
{
    char str1[] = "aaazaaa";
    char str2[] = "aazxzzz";
    size_t n = 4;
    int resul;
    int resul2;
    resul = ft_strncmp(str1, str2, n);
    resul2 = strncmp(str1, str2, n);
    printf ("\n%d", resul);
    printf ("\n%d", resul2);
    printf ("\nn vale %zu", n);
}*/