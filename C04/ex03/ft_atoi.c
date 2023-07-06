/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:25:33 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/23 17:35:32 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	number;

	minus = 1;
	number = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			minus *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (number * minus);
}	

/*
#include <stdio.h>

int	main(void)
{
	char	atoi1[] = "   ---+--+1234ab567";
	printf("%d\n", ft_atoi(atoi1));
}
*/
