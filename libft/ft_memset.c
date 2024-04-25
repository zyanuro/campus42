/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:45 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 16:09:19 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	p = ptr;
	while (num--)
	{
		*p++ = (unsigned char)value;
	}
	return (ptr);
}

/*int main()
{
	char str[] = "abecedario";
	ft_memset(str, 'R', 3);
	printf("%s", str);
	return 0;
}*/
