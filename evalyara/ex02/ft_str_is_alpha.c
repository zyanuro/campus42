/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:50:39 by ancuesta          #+#    #+#             */
/*   Updated: 2024/02/10 19:06:14 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	flag;
	int	index;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z')
			|| (str[index] >= 'A' && str[index] <= 'Z'))
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
	
	char str[20]= "abcdario";
	result = ft_str_is_alpha(str);
	result = result + '0';

	write (1, &result, 1);

	return (0);
}*/
