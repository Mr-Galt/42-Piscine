/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:49:56 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/10 08:25:34 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 47 || str[i] >= 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	char string1[] = "1234567";
	char string2[] = "13fdvng";
	char string3[] = "";

	printf("%d\n", ft_str_is_numeric(string1));
	printf("%d\n", ft_str_is_numeric(string2));
	printf("%d\n", ft_str_is_numeric(string3));
}
*/
