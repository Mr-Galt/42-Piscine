/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:36:47 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/08 18:50:45 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}	
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char string1[] = "AbCdEfG";
	char string2[] = "adsdfgr";
	char string3[] = {4, 3, 7};

	printf("%d\n", ft_str_is_printable(string1));
	printf("%d\n", ft_str_is_printable(string2));
	printf("%d\n", ft_str_is_printable(string3));
}
*/
