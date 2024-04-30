/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:30:13 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/26 19:32:37 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "libft.h"

int ft_tolower(int c)
{
    if ((c >= 65 && c <= 90))
    {
        char result = (char)c + 32;   
        return (result);
    }    
    else
    return (c);               
}

/*int main()
{   
    char letter; 
    letter = 'A';
    char result = tolower(letter);
    char result2 = ft_tolower(letter);
    
    printf("%c - %c\n", result, result2);

     char i = 'A';
    while (i <= 'Z')
    {
       char c = ft_tolower(i);
        printf("%c", c);
        i++;
    }
    

    return (0);
}*/