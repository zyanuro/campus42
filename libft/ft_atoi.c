/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:51:43 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/09 17:31:01 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;
    result = 0;
    i = 0;
    sign = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
            i++;
    if(str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                sign *= -1;
            i++;
        }
    while (ft_isdigit(str[i]))
    {
        result = result * 10 + ((str[i] - '0'));
        i++;
    }
    return (sign * result);
}

/*int main()
{
   char char_number[] = "-456";
   int result;
   int result2;
   result = ft_atoi(char_number);
   result2 = atoi(char_number);
   printf("My function: %d the original: %d", result, result2);
   return 0;        
}*/