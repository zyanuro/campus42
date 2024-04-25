/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:23:09 by ancuesta          #+#    #+#             */
/*   Updated: 2024/02/10 20:32:35 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	flag;
	int	index;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
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

	char str[20]= "";
	result = ft_str_is_uppercase(str);
	result = result + '0';

	write (1, &result, 1);

	return (0);
}*/
