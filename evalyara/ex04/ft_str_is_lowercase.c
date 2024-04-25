/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:23:47 by ancuesta          #+#    #+#             */
/*   Updated: 2024/02/10 19:33:04 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	flag;
	int	index;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
		}
		else
		{
			flag = 0;
		}
		index++;
	}
	if (flag == 1)
		return (1);
	else
		return (0);
}
/* int main(void)
{
	int result;

	char str[20]= "abcN";
	result = ft_str_is_lowercase(str);
	result = result + '0';

	write (1, &result, 1);

	return (0);
}*/
