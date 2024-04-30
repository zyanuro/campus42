/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:01:26 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 12:50:15 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
	char str[10] = "holaaaaaaa";
	size_t size = 0;
	ft_bzero(str, size);
	bzero(str, size);
	printf("%s", str);
		for (int i = 0 ; i < 10 ; i++)
		{
			printf("%c", str[i]);
		}	
	return 0;
}*/
