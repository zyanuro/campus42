/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:47:38 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/26 19:21:31 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "libft.h"

int ft_toupper(int c)
{
    if ((c >= 97 && c <= 122))
    {
        char result = (char)c - 32;   
        return (result);
    }    
    else
    return (c);               
}

/*int main()
{   
    char letter; 
    letter = 'a';
    char result = toupper(letter);
    char result2 = ft_toupper(letter);
    
    printf("%c - %c\n", result, result2);

     char i = 'A';
    while (i <= 'Z')
    {
       char c = ft_toupper(i);
        printf("%c", c);
        i++;
    }
    

    return (0);
}*/