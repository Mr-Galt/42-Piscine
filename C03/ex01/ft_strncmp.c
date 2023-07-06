/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:06:13 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/09 22:04:49 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char string1[] = "hallo";
	char string2[] = "hal";
	char string3[] = "hao ";

	printf("%d\n", ft_strncmp(string1, string1, 4));
	printf("%d\n", ft_strncmp(string3, string1, 4));
	printf("%d\n", ft_strncmp(string2, string3, 4));
	printf("%d\n", strncmp(string2,string3, 4));
}
*/
