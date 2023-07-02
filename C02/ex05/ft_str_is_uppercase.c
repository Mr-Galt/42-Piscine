/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:10:48 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/08 18:35:34 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
	char string2[] = "ABCDEFG";
	char string3[] = "";

	printf("%d\n", ft_str_is_uppercase(string1));
	printf("%d\n", ft_str_is_uppercase(string2));
	printf("%d\n", ft_str_is_uppercase(string3));
}*/
