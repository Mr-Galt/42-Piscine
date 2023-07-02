/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:22:21 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/10 08:28:15 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char string1[] = "AbCdEfG";
	char string2[] = "ag34525";
	char string3[] = "";

	printf("%d\n", ft_str_is_alpha(string1));
	printf("%d\n", ft_str_is_alpha(string2));
	printf("%d\n", ft_str_is_alpha(string3));
}
*/
