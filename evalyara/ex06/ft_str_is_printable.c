/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:34:36 by ancuesta          #+#    #+#             */
/*   Updated: 2024/02/14 19:51:23 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= '~'))
		{
			i = i + 1;
		}
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char str[] = "©";
	int x;
	x = ft_str_is_printable(str);
	x = x + '0';
	write (1, &x, 1);
	return (0);
}*/
