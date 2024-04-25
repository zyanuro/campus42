/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:45:19 by ancuesta          #+#    #+#             */
/*   Updated: 2024/02/14 20:09:21 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str [i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i = i + 1;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "abcdario";
	ft_strupcase(str);
	write(1, &str, 8);
	return (0);
}*/
