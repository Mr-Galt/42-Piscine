/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 07:36:12 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/09 09:39:53 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char string1[] = "hallo";
	char string2[] = "hal";
	char string3[] = "Hallo!";

	printf("%d\n", ft_strcmp(string1, string1));
	printf("%d\n", ft_strcmp(string3, string1));
	printf("%d\n", ft_strcmp(string2, string3));
}
*/
