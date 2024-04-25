/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:40:30 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 13:10:44 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}

/*int main()
{
 int tester_ft;
 int tester;

 tester_ft = ft_isascii(127);
 tester = isascii(127);
 printf("%d - %d", tester_ft, tester);
return 0;
}*/
