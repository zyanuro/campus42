/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:08:58 by ancuesta          #+#    #+#             */
/*   Updated: 2024/02/10 19:22:14 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	flag;
	int	index;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
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

	char str[20]= "0123456789";
	result = ft_str_is_numeric(str);
	result = result + '0';

	write (1, &result, 1);

	return (0);
}*/
