/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:27:56 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/10 19:37:07 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t  mem;
    void    *ptr;
   
    mem = count * size;
    ptr = malloc(mem);
    if (ptr == (void *)0)
        return ((void *)0);
    else
        ft_bzero(ptr, mem);
    return (ptr);
}
/*int main() 
{
    int count = 2;
    size_t size = sizeof(int);
    printf("%zu", size);
    char *ptr = ft_calloc(count, size);
    *ptr = "abcdefghi";
    printf("- %c",*ptr);
    free(ptr);
}*/