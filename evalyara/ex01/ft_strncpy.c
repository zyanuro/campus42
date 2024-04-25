/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:13:19 by ancuesta          #+#    #+#             */
/*   Updated: 2024/02/14 18:46:01 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	int				flag;

	index = 0;
	flag = 0;
	while (index < n)
	{
		dest[index] = src[index];
		if (src[index] == '\0')
			flag = 1;
		if (flag == 1)
			dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*int main(void)
{
	char src[20] = "Esto";
	char dest[20];
	ft_strncpy(dest, src, 8);

 	write(1, &dest, 20);
}*/	
