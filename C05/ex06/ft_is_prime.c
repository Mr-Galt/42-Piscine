/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:39:52 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/21 12:35:15 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int prime = atoi(argv[1]);

	if (argc == 2)
	{
		printf("You gave the number %d\n", prime);
		if (ft_is_prime(prime) == 1)
			printf("It is a prime number. GG!\n");
		if (ft_is_prime(prime) == 0)
			printf("It's not a prime number. Try again.\n");
	}
}
*/
