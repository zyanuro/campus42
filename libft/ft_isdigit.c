/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:17:44 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 13:11:05 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}

/*int main()
{
	int testerM;
	int tester; 
	testerM = isdigit('1');
	tester = isdigit('1');
	printf("%d - %d", testerM, tester);
	return 0;
}*/
