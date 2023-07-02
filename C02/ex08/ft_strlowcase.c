/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:00:59 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/08 19:06:37 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}	
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char string1[] = "AbCdEfG";
	char string2[] = "adsdfgr";
	char string3[] = "";

	printf("%s\n", ft_strlowcase(string1));
	printf("%s\n", ft_strlowcase(string2));
	printf("%s\n", ft_strlowcase(string3));
}
*/
