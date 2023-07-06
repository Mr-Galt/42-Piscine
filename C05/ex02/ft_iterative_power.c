/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:16:02 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/17 11:19:29 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int number;
	int power;
	if (argc == 3)
	{
		number = atoi(argv[1]);
		power = atoi(argv[2]);
		printf("Result for %d power %d: %d\n", number, power,
				ft_iterative_power(number, power));
	}
	else if (argc > 3)
		printf("Please use just two arguments, a number and the power.");
	else if (argc < 3)
		printf("You need to use two arguments, a number and the power.");
}
*/
